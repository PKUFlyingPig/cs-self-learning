# Information Retrieval

## Introduction

> When encountering a problem, remember the first thing is to **read the documentation**. Don't start by searching online or asking others directly. Reviewing FAQs may quickly provide the answer.

Information retrieval, as I understand it, is essentially about skillfully using search engines to quickly find the information you need, including but not limited to programming.

The most important thing in programming is STFW (search the fucking web) and RTFM (read the fucking manual). First, you should read the documentation, and second, learn to search. With so many resources online, how you use them depends on your information retrieval skills.

To understand how to search effectively, we first need to understand how search engines work.

## How Search Engines Work

The working process of a search engine can generally be divided into three stages: [^1]

1. Crawling and Fetching: Search engine spiders visit web pages by tracking links, obtain the HTML code of the pages, and store it in a database.
2. Preprocessing: The indexing program processes the fetched web page data by extracting text, segmenting Chinese words, indexing, etc., preparing for the ranking program.
3. Ranking: When users enter keywords, the ranking program uses the indexed data to calculate relevance and then generates the search results page in a specific format.

The first step involves web crawlers, often exaggerated in Python courses. It can be simply understood as using an automated program to download all text, images, and related information from websites and store them locally.

The second step is the core of a search engine, but not critical for users to understand. It can be roughly understood as cleaning data and indexing pages, each with keywords for easy querying.

The third step is closely related to us. Whether it's Google, Baidu, Bing, or others, you input keywords or queries, and the search engine returns results. This article teaches you how to obtain better results.

## Basic Search Techniques

Based on the above working principles, we can roughly understand that a search engine can be treated as a smart database. Using better query conditions can help you find the information you need faster. Here are some search techniques:

### Use English

First, it's important to know that in programming, it's best to search in English. Reasons include:

1. In programming and various software operations, English resources are of higher quality than those in Chinese or other languages.
2. Due to translation issues, English terms are more accurate and universally applicable than Chinese.
3. Chinese search engines' word segmentation systems can lead to ambiguity. For example, Google searches in Chinese may not yield many useful results.

If your English is not strong, use translation tools like Baidu or Sogou; they are sufficient.

### Refine Keywords

Don't search whole sentences. Although search engines automatically segment words, searching with whole sentences versus keywords can yield significantly different results in accuracy and order. Search engines are machines, not your teachers or colleagues. As mentioned above, searching is actually querying a database crawled by the search engine, so it's better to break down into keywords or phrases.

For example, if you want to know how to integrate vcpkg into a project instead of globally, searching for "如何将vcpkg集成到项目中而不是全局" in a long sentence may not yield relevant results. It's better to break it down into keywords like "vcpkg 集成 项目 全局".

### Replace Keywords

If you can't find what you're looking for, try replacing "项目" with "工程" or remove "集成". If that doesn't work, try advanced searching.

### Advanced Searching

Most search engines support advanced searching, including Google, Bing, Baidu, Ecosia, etc. Common formats include:

* Exact Match: Enclose the search term in quotes for precise matching.
* Exclude Keywords: Use a minus sign (-) to exclude specific words.
* Include Keywords: Use a plus sign (+) to ensure a keyword is included.
* Search Specific File Types: Use `filetype:pdf` to search for PDF files directly.
* Search Specific Websites: Use `site:stackoverflow.com` to search within a specific site.

Refer to the website instructions for specific syntax, such as [Baidu Advanced Search](https://baike.baidu.com/item/高级搜索/1743887?fr=aladdin) or [Bing Advanced Search Keywords](https://help.bing.microsoft.com/#apex/bing/zh-CHS/10001/-1).

#### GitHub Advanced Search

Use [GitHub's Advanced Search page](https://github.com/search/advanced) or refer to [GitHub Query Syntax](https://zhuanlan.zhihu.com/p/273766377) for advanced searches on GitHub. Examples include searching by repository name, description, readme, stars, fork count, size, update/creation date, license, language, user, and organization. These can be

 used in combination.

### More Tips

Depending on the context, I recommend specific sites for certain queries:

* For language-specific queries (e.g., C++/Qt/OpenGL), add `site:stackoverflow.com`.
* For specific business/development environments or software-related issues, first check BugLists, IssueLists, or relevant forums.
* QQ groups are also a place to ask questions, but make sure your queries are meaningful.
* Chinese platforms like Zhihu, Jian Shu, Blog Park, and CSDN have a wealth of Chinese notes and experiences.

### About Baidu

Many programmers advise against using Baidu, preferring Google or Bing International. However, if you really need it, consider using alternatives like Ecosia or Yandex. For Chinese searches, Baidu might actually be the best option due to its database and indexing policies.

## Code Search

In addition to search engines, you might also need to search for code, either your own or from projects. Here are some recommended tools:

### Local Code Search

* ACK or ACK2, well-established search tools written in Perl.
* The Silver Searcher, implemented in C.
* The Platinum Searcher, implemented in Go.
* FreeCommander's built-in search, efficient on solid-state drives.
* IDE's built-in search, though not always the most user-friendly.

### Open Source Code Search

* [Searchcode](https://searchcode.com) for searching open source code, known for speed.
* [一行代码](https://www.alinecode.com) a useful Chinese tool for code search.

[^1]: [Introduction to How Search Engines Work - Zhihu](https://zhuanlan.zhihu.com/p/301641935)