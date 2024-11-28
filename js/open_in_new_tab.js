// Description: Open external links in a new tab and PDF links in a new tab
// Based on: https://jekyllcodex.org/without-plugin/new-window-fix/

// Open external links in a new window
function external_new_window() {
    for(let c = document.getElementsByTagName("a"), a = 0; a < c.length; a++) {
        let b = c[a];
        if(b.getAttribute("href") && b.host !== location.host) {
            b.target = "_blank";
            b.rel = "noopener";
        }
    }
}

// Open PDF links in a new window
function pdf_new_window() {
    if (!document.getElementsByTagName) {
        return false;
    }

    const extensions = ['.pdf', '.doc', '.docx', '.json', '.xls', '.xlsx', '.ppt', '.pptx', '.zip', '.rar', '.tar', '.gz', '.7z', '.bz2', '.xz', '.tgz', '.tar.gz'];
    let links = document.getElementsByTagName("a");

    for (let eleLink = 0; eleLink < links.length; eleLink++) {
        let href = links[eleLink].href.toLowerCase(); // Convert href to lowercase for case-insensitive matching

        if (extensions.some(ext => href.endsWith(ext))) {
            links[eleLink].onclick = function() {
                window.open(this.href);
                return false;
            }
        }
    }
}

function apply_rules() {
    external_new_window();
    pdf_new_window();
}

if (typeof document$ !== "undefined") {
    // Compatibility with mkdocs-material's instant loading feature
    document$.subscribe(function() {
        apply_rules();
    });
} else {
    // For browsers without mkdocs-material's instant loading feature
    document.addEventListener("DOMContentLoaded", function() {
        apply_rules();
    });
}
