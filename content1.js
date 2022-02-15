// ==UserScript==
// @description Мой самый первый юзерскрипт 
// @include https://www.binance.com/ru/nft/mystery-box/*
// ==/UserScript==
(function (window, undefined) {
    var w;
    if (typeof unsafeWindow != undefined) {
        w = unsafeWindow
    } else {
        w = window;
    }
if (w.self != w.top) {
        return;
    }
    if (/http:\/\/userscripts.org/.test(w.location.href)) {
       var interval = setInterval(function(){
		if(window.grecaptcha){
		grecaptcha.ready(function(){
		grecaptcha.execute('6LeUPckbAAAAAIX0YxfqgiXvD3EOXSeuq0OpO8u',{action: 'homepage'}).then(function(token){
		console.log(token);
		clearInterval(interval);
		}
	)})
	}
	},500)
    }
})(window);