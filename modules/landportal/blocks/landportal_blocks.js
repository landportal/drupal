// This file is directly included as a string in landportal_blocks.module
var $ = jQuery.noConflict(); $(document).ready(function($) {
    var menu = $("#page-submenu .nav");
    //menu.empty();
    $(".field-name-field-visualization .view-coda").each(function (i, e) {
        title = $(e).find(".field-name-title-field h3")[0];
        if (!title || !title.innerHTML || title.innerHTML == "<none></none>" || title.innerHTML.startsWith("Latest ")) return;
        menu.append("<li><a href=\"#" + e.id + "\">" + title.innerHTML + "</li>");
    });
    $(".region-content section.block").each(function (i, e) {
        title = $(e).find("h2.block-title")[0];
        //console.log(e.id);
        if (e.id == "block-addtoany-addtoany-button") return;
        if (!title || !title.innerHTML || title.innerHTML == "<none></none>" || title.innerHTML.startsWith("Latest ")) return;
        var t = title.innerHTML;
        //console.log(e.id, title.innerHTML);
        menu.append("<li><a href=\"#" + e.id + "\" title=\"" + title.innerHTML + "\">" + t + "</li>");
    });
});
