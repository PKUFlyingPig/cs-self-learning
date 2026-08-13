> Contributed by [@HardwayLinka](https://github.com/HardwayLinka)

The field of computer science is vast and rapidly evolving, making lifelong learning crucial. However, our sources of knowledge in daily development and learning are complex and fragmented. We encounter extensive documentation manuals, brief blogs, and even snippets of news and public accounts on our phones that may contain interesting knowledge. Therefore, it's vital to use various tools to create a learning workflow that suits you, integrating these knowledge fragments into your personal knowledge base for easy reference and review. After two years of learning alongside work, I have developed the following learning workflow:

![](https://raw.githubusercontent.com/HardwayLinka/image/master/Drawing 2022-10-20 11.23.41.excalidraw.png)

## Core Logic

Initially, when learning new knowledge, I referred to Chinese blogs but often found bugs and gaps in my code practice. Gradually, I realized that the information I referred to might be incorrect, as the threshold for posting blogs is low and their credibility is not high. So, I started consulting some related Chinese books.

Chinese books indeed provide a comprehensive and systematic explanation of concepts. However, given the rapid evolution of computer technology and the US's leadership in CS, content in Chinese books often lags behind the latest knowledge. This led me to realize the importance of firsthand information. Some Chinese books are translations of English ones, and translation can take a year or two, causing a delay in information transmission and loss during translation. If a Chinese book is not a translation, it likely references other books, introducing biases in interpreting the original English text.

Therefore, I naturally started reading English books. The quality of English books is generally higher than that of Chinese ones. As I delved deeper into my studies, I discovered a hierarchy of information reliability: `source code` > `official documentation` > `English books` > `English blogs` > `Chinese blogs`. This led me to create an "Information Loss Chart":

![](https://cdn.sspai.com/2022/10/11/bf07c1965a2e5bdf3f00644737789e2e.png)

Although firsthand information is crucial, subsequent iterations (N-th hand information) are not useless. They include the author's transformation of the source knowledge — such as logical organization (flow charts, mind maps) or personal interpretations (abstractions, analogies, extensions to other knowledge points). These transformations can help us quickly grasp and consolidate core knowledge, like using guidebooks in school. Moreover, interacting with others' interpretations during learning is important, allowing us to benefit from various perspectives. Hence, it's advisable to first choose high-quality, less distorted sources of information while also considering multiple sources for a more comprehensive and accurate understanding.

In real-life work and study, learning rarely follows a linear, deep dive into a single topic. Often, it involves other knowledge points, such as new jargon, classic papers not yet read, or unfamiliar code snippets. This requires us to think deeply and "recursively" learn, establishing connections between multiple knowledge points.

## Choosing the Right Note-taking Software

The backbone of the workflow is built around the core logic of "multiple references for a single knowledge point and building connections among various points." This is similar to writing academic papers. Papers usually have footnotes explaining keywords and multiple references at the end. But our daily notes are much more casual, hence the need for a more flexible method.

I'm accustomed to jumping to related functions and implementations in an IDE. It would be great if notes could also be interlinked like code. Current "double-link note-taking software," such as Roam Research, Logseq, Notion, and Obsidian, addresses this need. I chose Obsidian for the following reasons:

- Obsidian is based locally, with fast opening speeds, and can store many e-books. My laptop, an Asus TUF Gaming FX505 with 32GB of RAM, runs Obsidian very smoothly.
- Obsidian is Markdown-based. This is an advantage because if a note-taking software uses a proprietary format, it's inconvenient for third-party extensions and opening notes with other software.
- Obsidian has a rich and active plugin ecosystem, allowing for an "all in one" effect, meaning various knowledge sources can be integrated in one place.

## Information Sources

Obsidian's plugins support PDF formats, and it naturally supports Markdown. To achieve "all in one," you can convert other file formats to PDF or Markdown. This presents two questions:

- What formats are there?
- How to convert them to PDF or Markdown?

![](https://cdn.sspai.com/2022/10/11/3801b1c9b94286566fe677e3b12cc7b0.png)

### Formats

File formats depend on their display platforms. Before considering formats, let's list the sources of information I usually access:

![](https://cdn.sspai.com/2022/10

/11/07e97f372850054958d4961a3787a93f.png)

The main categories are `articles`, `papers`, `e-books`, and `courses`, primarily including formats like `web pages`, `PDFs`, `MOBI`, `AZW`, and `AZW3`.

### Conversion to PDF or Markdown

Online articles and courses are mostly presented as web pages. To convert web pages to Markdown, I use the clipping software "Simplified Read," which can clip articles from nearly all platforms into Markdown and import them into Obsidian.

![](https://cdn.sspai.com/2022/10/11/211cffa78f20a9e7286a7419e9e0b878.png)

For papers and e-books, if the format is already PDF, it's straightforward. Otherwise, I use Calibre for conversion:

![](https://cdn.sspai.com/2022/10/11/51575f65f6f4c6edfa6c5b97fd16d625.png)

Now, using Obsidian's PDF plugin and native Markdown support, I can seamlessly take notes and reference across these documents (see "Information Processing" below for details).

![](https://cdn.sspai.com/2022/10/11/d64a9a2d6406d2d367dcb505ede69c83.png)

### Managing Information Sources

For file resources like PDFs, I use local or cloud storage. For web resources, I categorize and save them in browser bookmarks or clip them into Markdown notes. However, browsers don't support mobile web bookmarking. To enable cross-platform web bookmarking, I use Cubox. With a swipe on my phone, I can save interesting web pages in one place. Although the free version limits to 100 bookmarks, it's usually sufficient and prompts me to process these pages promptly.

![](https://cdn.sspai.com/2022/10/11/ad7ebfcb4619f64a41d328b88e0e3a12.png)

Moreover, many of the web pages we bookmark are not from fully-featured blog platforms like Zhihu or Juejin but personal sites without mobile apps. These can be easily overlooked in browser bookmarks, and we might miss new article notifications. Here, `RSS` comes into play.

`RSS` (Rich Site Summary) is a type of web feed that allows users to access updates to online content in a standardized format. On desktops, `RSSHub Radar` helps discover and generate `RSS` feeds, which can be subscribed to using `Feedly` (both have official Chrome browser plugins).

![](https://cdn.sspai.com/2022/10/11/5df6cd9d967f190df35928e781f9185f.png)

With this, the information collection process is comprehensive. But no matter how well categorized, information needs to be internalized to be useful. After collecting information, the next step is processing it — reading, understanding the semantics (especially for English sources), highlighting key sentences or paragraphs, noting queries, brainstorming related knowledge points, and writing summaries. What tools are needed for this process?

## Information Processing

### English Sources

For English materials, I initially used "Youdao Dictionary" for word translation, Google Translate for sentences, and "Deepl" for paragraphs. Eventually, I realized this was too slow and inefficient. Ideally, a single tool that can handle word, sentence, and paragraph translation would be optimal. After researching, I chose "Quicker" + "Saladict" for translation.

![](https://cdn.sspai.com/2022/10/11/a7ebb1d3c46702b56bd6d171dfcfc075.png)

This combo allows translation outside browsers and supports words, sentences, and paragraphs, offering results from multiple translation platforms. For non-urgent word lookups, the "Collins Advanced" dictionary is helpful as it explains English words in English, providing context to aid understanding.

![](https://cdn.sspai.com/2022/10/11/article/827c9a8048c83e504ccb15893702bf09)

### Multimedia Information

After processing text-based information, it's important to consider how to handle multimedia information. Specifically, I'm referring to English videos, as I don't have a habit of learning through podcasts or recordings and I rarely watch Chinese tutorials anymore. Many renowned universities offer open courses in video format. Wouldn't it be helpful if you could take notes on these videos? Have you ever thought it would be great if you could convert the content of a lecture into text, since we usually read faster than a lecturer speaks? Fortunately, the software `Language Reactor` can export subtitles from YouTube and Netflix videos, along with Chinese translations.

We can copy the subtitles exported by `Language Reactor` into `Obsidian` and read them as articles. Besides learning purposes, you can also use this plugin while watching YouTube videos. It displays subtitles in both English and Chinese, and you can click on unfamiliar words in the subtitles to see their definitions.

![](https://cdn.sspai.com/2022/10/11/364c8e6ed263affa84d9eee61338b4af.png)

However, reading texts isn't always the most efficient way to learn about some abstract concepts. As the saying goes, "A picture is worth a thousand words." What if we could link a segment of text to corresponding images or even video operations? While browsing the `Obsidian` plugin marketplace, I discovered a plugin called `Media Extended`. This plugin allows you to add links in your notes that jump to specific times in a video, effectively connecting your notes to the video! This works well with the video subtitles mentioned earlier, where each line of subtitles corresponds to a time stamp, allowing for jumps to specific parts of the video. This means you don't have to cut specific video segments; instead, you can jump directly within the article!

![](https://cdn.sspai.com/2022/10/11/17554cfdf662d5719ada453674012fdb.gif)

`Obsidian` also has a powerful plugin called `Annotator`, which allows you to jump from notes to the corresponding section in a PDF.

![](https://cdn.sspai.com/2022/10/11/article/b56994bf9a306830d8b0b8112677d3ec)

Now, with `Obsidian`'s built-in double-chain feature, we can achieve inter-note linking, and with the above plugins, we can extend these links to multimedia. This completes the process of information handling. Learning often involves both a challenging ascent and a familiar descent. So, how can we incorporate the review process into this workflow?

## Information Review

`Obsidian` already has a plugin that connects to `Anki`, the renowned spaced repetition-based memory software. With this plugin, you can export segments of your notes to `Anki` as flashcards, each containing a link back to the original note.

![](https://cdn.sspai.com/2022/10/11/1f7cebd8dd28f664d77cbf0ab228c406.gif)

## Conclusion

This workflow evolved over two years of learning in my spare time. Frustration with repetitive processes led to specific needs, which were fortunately met by tools I discovered online. Don't force tools into your workflow just for the sake of satisfaction; life is short, so focus on what's truly important.

By the way, this article discusses the evolution of the workflow. If you're interested in the details of how this workflow is implemented, I recommend reading the following articles in order after this one:

1. [3000+ Hours Accumulated Learning Workflow](https://sspai.com/post/75969)
2. [Advanced Techniques in Obsidian | Creating Notes that Link to Any File Format](https://juejin.cn/post/7145351315705577485)
3. [Obsidian Workflow Overview Video Sharing](https://www.bilibili.com/video/BV19At3emEuU/?vd_source=fc2cc5a122e0091fcf3d1453b89a917c)
