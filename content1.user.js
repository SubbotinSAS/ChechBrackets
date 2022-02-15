
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
