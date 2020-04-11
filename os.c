<!DOCTYPE html>
<!-- saved from url=(0029)https://pastebin.com/zSeNPXHB -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    	<!-- Global site tag (gtag.js) - Google Analytics -->
    <!--OLD CODE<script async src="https://www.googletagmanager.com/gtag/js?id=UA-58643-34"></script>-->

    <!--OLD CODE<script>
      window.dataLayer = window.dataLayer || [];
      function gtag(){dataLayer.push(arguments);}
      gtag('js', new Date());

      gtag('config', 'UA-58643-34');
    </script>-->

    <!-- Google Tag Manager -->
    <script type="text/javascript" async="" src="./os_files/analytics.js.download"></script><script async="" src="./os_files/gtm.js.download"></script><script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
                new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
            j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
            'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
        })(window,document,'script','dataLayer','GTM-5VVPHVN');</script>
    <!-- End Google Tag Manager -->

    

		
		<title>[C] Scheduling algorithm - Pastebin.com</title>
		<link rel="shortcut icon" href="https://pastebin.com/favicon.ico">
		<script src="./os_files/jquery.min.js.download"></script>
		<script src="./os_files/pastebin.min.v3.js.download"></script>
            
            
		<link href="./os_files/pastebin.min.v9.css" rel="stylesheet" type="text/css">
		<!--[if lt IE 10]>
			<link href="/i/pastebin.ie8.css" rel="stylesheet" type="text/css" />
		<![endif]-->


			<link href="./os_files/c.css" rel="stylesheet" type="text/css"> 
		<style>body{-webkit-text-size-adjust:none;}</style>
		<meta name="robots" content="noindex">		<meta property="fb:app_id" content="231493360234820">
		<meta property="og:title" content="[C] Scheduling algorithm - Pastebin.com">
		<meta property="og:type" content="article">
		<meta property="og:url" content="https://pastebin.com/zSeNPXHB">
		<meta property="og:image" content="https://pastebin.com/i/facebook.png">
		<meta property="og:site_name" content="Pastebin">
		<meta name="google-site-verification" content="jkUAIOE8owUXu8UXIhRLB9oHJsWBfOgJbZzncqHoF4A">
		<link rel="canonical" href="https://pastebin.com/zSeNPXHB">
				<meta name="viewport" content="width=device-width, initial-scale=0.75, maximum-scale=1.0, user-scalable=yes">
		<script type="text/javascript">
			if (top != self)
				top.location.href = location.href;
		</script>

                                <!--<script type="text/javascript" src="https://cdn.bidder.dev/clients/StreamAMP/pastebin/sa-script.js"></script>-->
            </head>
	<body>

            <!-- Google Tag Manager (noscript) -->
        <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-5VVPHVN"
                          height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
        <!-- End Google Tag Manager (noscript) -->
    
	<div id="main_frame">
		<div id="jq-dropdown-1" class="jq-dropdown jq-dropdown-anchor-right jq-dropdown-scroll">
			<ul class="jq-dropdown-menu">
				
				<li class="lih_640">
					<form class="search_form_li" name="search_form_li" method="get" action="https://pastebin.com/search" id="cse-search-box-li">
						<input class="search_input_li" type="text" name="q" size="5" value="" placeholder="search...">
					</form>

				</li>
				<li class="lih_div"></li>
				<li onclick="location.href=&#39;/signup&#39;" class="dd_su">Sign Up</li>
				<li onclick="location.href=&#39;/login&#39;" class="dd_lo">Login</li>
				<li class="lih_div"></li>
				<li onclick="location.href=&#39;/api&#39;" class="lih_640">API</li>
				<li onclick="location.href=&#39;/faq&#39;" class="lih_640">FAQ</li>
				<li onclick="location.href=&#39;/tools&#39;" class="lih_640">Tools</li>
				<li onclick="location.href=&#39;/archive&#39;" class="lih_640">Archive</li>			</ul>
		</div>
		<div id="header">
			<div id="header_wrap">
				<div id="header_top">
					<div id="header_logo" onclick="location.href=&#39;/&#39;">PASTEBIN</div>
                    <div id="header_links">
                                                    <a href="https://pastebin.com/pro" class="mmh">GO <img src="./os_files/t.gif" alt="" class="header_pro_btn"></a>
                        
                        <a href="https://pastebin.com/api" class="mmh">API</a>
                        <a href="https://pastebin.com/tools" class="mmh">TOOLS</a>
                        <a href="https://pastebin.com/faq" class="mmh">FAQ</a>
                        <a href="https://deals.pastebin.com/" target="_blank" class="mmh">DEALS</a>
                    </div>
                    <!--
                    <div id="header_search">
                        <form class="search_form" name="search_form" method="get" action="/search" id="cse-search-box">
                            <input class="search_input" type="text" name="q" size="5" value="" placeholder="Search..." />
                        </form>
                    </div>
                    -->
                    <div id="header_new_paste" class="new_paste_button" onclick="location.href=&#39;/&#39;">paste</div>
                    
			<div class="header_sign">
				<a href="https://pastebin.com/login" class="btn-sign sign-in">SIGN IN</a>
				<a href="https://pastebin.com/signup" class="btn-sign sign-up">SIGN UP</a>
			</div>				</div>
			</div>
		</div>
		<div id="super_frame">
			<div id="monster_frame">
				<div id="content_frame">
					<div id="content_right">						

	<div class="content_right_menu">
									<div class="content_right_title"><a href="https://pastebin.com/archive">Public Pastes</a></div>
									<div id="menu_2">
										<ul class="right_menu"><li><a href="https://pastebin.com/jyCscpGW">Untitled</a><span>JavaScript | 13 sec ago</span></li><li><a href="https://pastebin.com/ckqBURFf">Untitled</a><span>JavaScript | 16 sec ago</span></li><li><a href="https://pastebin.com/SfZ5Buth">Untitled</a><span>JSON | 33 sec ago</span></li><li><a href="https://pastebin.com/SANaAaMd">Untitled</a><span>C | 1 min ago</span></li><li><a href="https://pastebin.com/KW56YPtN">Idlewood Extra Sos...</a><span>Pawn | 2 min ago</span></li><li><a href="https://pastebin.com/7Ezk3LzV">Extractor</a><span>Python | 2 min ago</span></li><li><a href="https://pastebin.com/zEvY4sAG">Sostituire El Coro...</a><span>Pawn | 2 min ago</span></li><li><a href="https://pastebin.com/YEuhyzvQ">Untitled</a><span>C++ | 2 min ago</span></li></ul></div></div>	<div id="abrpm2"></div>
	<div style="padding: 0; width:160px;margin: 10px 0;clear:left;">
<ins class="675bfda0" data-key="29d5bc270b3c2684fd3d158f6ceb857c" id="675bfda0-29d5bc270b3c2684fd3d158f6ceb857c-0-7084" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent; height: 0px; overflow: hidden;"><ins id="675bfda0-29d5bc270b3c2684fd3d158f6ceb857c-0-7084-1" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent;"><script type="text/javascript">new Image().src = "https://aj2073.online/zxybMRcNPfJusyhvdKkIdoeDqHRe0OB7MMTUIgBo362gkxplgDtnkREeyW15wFio65wvga0TavHbCvBjeawceuaS64bg_2SmnkuxJhAGMdZ0blDQh_y_Hq03p8n-EdYbFoUI--230rWrzFB-hEwhuYr6H2mnW2SSh4JLKA_9lVVnnUAqRwfVyvmGYB2izQM1sQ0RBnIZMFdzxGbxDwDFkm2Pgp19_aY4ksdgszZGNjISJ1v9q8RHjPlFvCCwiMaqDy1lfIa3Q8vNpEOmuURz6alfC-MDsfzJ_PgtvLBRWTp41rAg3VlZ8hINx2ZjcRsTEhODE?DC=WZ";</script></ins></ins>
<script async="" defer="" src="./os_files/9ed1ba93.js.download"></script>
</div>
<div id="steadfast" title="Pastebin is proudly hosted by Steadfast.net" onclick="location.href=&#39;http://steadfast.net/?utm_source=pastebin.com&amp;utm_medium=referral&amp;utm_content=hosting_by_banner&amp;utm_campaign=referral_20140118_x_x_pastebin_partner&amp;source=referral_20140118_x_x_pastebin_partner&#39;"></div>
	</div>
	<div id="content_left"><div id="ie_msg"></div>
					
		
	<div class="paste_box_frame">
		<div class="tweet h_800">
			<div onclick="facebookpopup(&#39;/zSeNPXHB&#39;); return false;" id="b_facebook2" title="Share on Facebook!"><span id="b_facebook">SHARE</span></div>
			<div onclick="twitpopup(&#39;/zSeNPXHB&#39;); return false;" id="b_twitter2" title="Share on Twitter!"><span id="b_twitter">TWEET</span></div>
		</div>
		<div class="paste_box_icon">
			<img src="./os_files/t.gif" class="i_gb" alt="">
		</div>
		<div class="paste_box_info">
			<div class="paste_box_line1" title="Scheduling algorithm"><h1>Scheduling algorithm</h1></div>
			<div class="paste_box_line2">
				<img src="./os_files/t.gif" class="img_line t_us" alt="" style="margin-left:0"> <a href="https://pastebin.com/u/csenotes12">csenotes12</a>  <a href="https://pastebin.com/message_compose?to=csenotes12"><img src="./os_files/t.gif" class="i_pm" title="Send a private message to: csenotes12" alt=""></a>
				<img src="./os_files/t.gif" class="img_line t_da" alt=""> <span title="Tuesday 9th of April 2019 09:06:34 AM CDT">Apr 9th, 2019</span>
				<img src="./os_files/t.gif" class="img_line t_vi" alt="" title="Unique visits to this paste"> 316
				<img src="./os_files/t.gif" class="img_line t_ex" alt="" title="When this paste gets automatically deleted"> Never
			</div>
		</div>
	</div>
	<div class="banner_728">
<ins class="675bfda0" data-key="26941916746eb874a2159e7dc0a54739" id="675bfda0-26941916746eb874a2159e7dc0a54739-1-8309" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent; height: 0px; overflow: hidden;"><ins id="675bfda0-26941916746eb874a2159e7dc0a54739-1-8309-1" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent;"><script type="text/javascript">new Image().src = "https://aj2073.online/z3gEizbnd82i0C_tEwYF1EVpPIq43Jg6Gnu2e4ewp2k0smdSJb5wstwQWjqqVdog6XEy3Vmiy80oZKx-aW8MO9oLGL2i7-E7Quugoy-HCuaJycUyInRn4aotAZlWaZhuEAJr7pnJ0gP6AKUEVKS18PmT5j6Xwbw3x0gO3wrpy7UkW_pZdmvCymGQ-v8roqyR26CikhchE2kRod7C2YU2_RTy_iLaHaGsja5R65PlSCfj6cuErgjXnhprXxSFZJlhwcabkMwybmQLA0K96KeaXqD_E46_bdT_YLoUH5O_KVUbSio55CchgcX2ZalVqHysMIXSH?DC=WZ";</script></ins></ins>
<script async="" defer="" src="./os_files/9ed1ba93.js.download"></script>
</div>
			<div class="content_text no_padding">
				<div id="notice" style="margin: 0 0 10px 0">
					<b>Not a member of Pastebin yet?</b> <a href="https://pastebin.com/signup"><b><u>Sign Up</u></b></a>, it unlocks many cool features!
				</div>
			</div>
	<div id="code_frame2">
		<div id="code_frame">
			<div id="code_buttons">
				<span class="go_right">
					<a href="https://pastebin.com/raw/zSeNPXHB" class="buttonsm">raw</a><a href="https://pastebin.com/dl/zSeNPXHB" class="buttonsm">download</a><a href="https://pastebin.com/index/zSeNPXHB" class="buttonsm buttonhide">clone</a><a href="https://pastebin.com/embed/zSeNPXHB" class="buttonsm buttonhide">embed</a><a href="https://pastebin.com/report/zSeNPXHB" class="buttonsm">report</a><a href="https://pastebin.com/print/zSeNPXHB" class="buttonsm buttonhide">print</a>
				</span>
				<span class="h_640"><a href="https://pastebin.com/archive/c" class="buttonsm" style="margin:0">C</a></span> 1.49 KB
			</div>
			<div id="selectable">
				<ol class="c"><li class="li1"><div class="de1"><span class="co2">#include&lt;stdio.h&gt; </span></div></li>
<li class="li1"><div class="de1"><span class="kw4">int</span> main<span class="br0">(</span><span class="br0">)</span> </div></li>
<li class="li1"><div class="de1"><span class="br0">{</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw4">int</span> count<span class="sy0">,</span>j<span class="sy0">,</span>n<span class="sy0">;</span></div></li>
<li class="li2"><div class="de2">&nbsp; <span class="kw4">int</span> <span class="kw3">time</span><span class="sy0">,</span>remaining<span class="sy0">;</span></div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw4">int</span> flag<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">,</span>time_quantum<span class="sy0">=</span><span class="nu0">10</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw4">int</span> waiting_time<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">,</span>turn_around_time<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">,</span>arrival_time<span class="br0">[</span><span class="nu0">10</span><span class="br0">]</span><span class="sy0">,</span>burst_time<span class="br0">[</span><span class="nu0">10</span><span class="br0">]</span><span class="sy0">,</span>rt<span class="br0">[</span><span class="nu0">10</span><span class="br0">]</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"<span class="es1">\n</span><span class="es1">\n</span>Enter the Total number of Process:<span class="es1">\t</span> "</span><span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw3">scanf</span><span class="br0">(</span><span class="st0">"%d"</span><span class="sy0">,&amp;</span>n<span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li2"><div class="de2">&nbsp; remaining<span class="sy0">=</span>n<span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw1">for</span><span class="br0">(</span>count<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span>count<span class="sy0">&lt;</span>n<span class="sy0">;</span>count<span class="sy0">++</span><span class="br0">)</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="br0">{</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"Enter Arrival Time and Burst Time for Process Process Number %d :"</span><span class="sy0">,</span>count<span class="sy0">+</span><span class="nu0">1</span><span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw3">scanf</span><span class="br0">(</span><span class="st0">"%d"</span><span class="sy0">,&amp;</span>arrival_time<span class="br0">[</span>count<span class="br0">]</span><span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li2"><div class="de2">&nbsp; &nbsp; <span class="kw3">scanf</span><span class="br0">(</span><span class="st0">"%d"</span><span class="sy0">,&amp;</span>burst_time<span class="br0">[</span>count<span class="br0">]</span><span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">=</span>burst_time<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="br0">}</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"Enter Time Quantum:%d<span class="es1">\t</span>"</span><span class="sy0">,</span>time_quantum<span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li2"><div class="de2">&nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"<span class="es1">\n</span><span class="es1">\n</span>Process<span class="es1">\t</span>|Turnaround Time|Waiting Time<span class="es1">\n</span><span class="es1">\n</span>"</span><span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw1">for</span><span class="br0">(</span><span class="kw3">time</span><span class="sy0">=</span><span class="nu0">0</span><span class="sy0">,</span>count<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span>remaining<span class="sy0">!=</span><span class="nu0">0</span><span class="sy0">;</span><span class="br0">)</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="br0">{</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">if</span><span class="br0">(</span>rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">&lt;=</span>time_quantum <span class="sy0">&amp;&amp;</span> rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">&gt;</span><span class="nu0">0</span><span class="br0">)</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="br0">{</span> </div></li>
<li class="li2"><div class="de2">&nbsp; &nbsp; &nbsp; <span class="kw3">time</span><span class="sy0">+=</span>rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; flag<span class="sy0">=</span><span class="nu0">1</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="br0">}</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">else</span> <span class="kw1">if</span><span class="br0">(</span>rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">&gt;</span><span class="nu0">0</span><span class="br0">)</span> </div></li>
<li class="li2"><div class="de2">&nbsp; &nbsp; <span class="br0">{</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">-=</span>time_quantum<span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; <span class="kw3">time</span><span class="sy0">+=</span>time_quantum<span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="br0">}</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">if</span><span class="br0">(</span>rt<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">==</span><span class="nu0">0</span> <span class="sy0">&amp;&amp;</span> flag<span class="sy0">==</span><span class="nu0">1</span><span class="br0">)</span> </div></li>
<li class="li2"><div class="de2">&nbsp; &nbsp; <span class="br0">{</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; remaining<span class="sy0">--;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"P[%d]<span class="es1">\t</span>|<span class="es1">\t</span>%d<span class="es1">\t</span>|<span class="es1">\t</span>%d<span class="es1">\n</span>"</span><span class="sy0">,</span>count<span class="sy0">+</span><span class="nu0">1</span><span class="sy0">,</span>time<span class="sy0">-</span>arrival_time<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">,</span>time<span class="sy0">-</span>arrival_time<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">-</span>burst_time<span class="br0">[</span>count<span class="br0">]</span><span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; waiting_time<span class="sy0">+=</span>time<span class="sy0">-</span>arrival_time<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">-</span>burst_time<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; turn_around_time<span class="sy0">+=</span>time<span class="sy0">-</span>arrival_time<span class="br0">[</span>count<span class="br0">]</span><span class="sy0">;</span> </div></li>
<li class="li2"><div class="de2">&nbsp; &nbsp; &nbsp; flag<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="br0">}</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">if</span><span class="br0">(</span>count<span class="sy0">==</span>n<span class="sy0">-</span><span class="nu0">1</span><span class="br0">)</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; count<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">else</span> <span class="kw1">if</span><span class="br0">(</span>arrival_time<span class="br0">[</span>count<span class="sy0">+</span><span class="nu0">1</span><span class="br0">]</span><span class="sy0">&lt;=</span><span class="kw3">time</span><span class="br0">)</span> </div></li>
<li class="li2"><div class="de2">&nbsp; &nbsp; &nbsp; count<span class="sy0">++;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; <span class="kw1">else</span> </div></li>
<li class="li1"><div class="de1">&nbsp; &nbsp; &nbsp; count<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="br0">}</span> </div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"<span class="es1">\n</span>Average Waiting Time= %f<span class="es1">\n</span>"</span><span class="sy0">,</span>waiting_time<span class="sy0">*</span><span class="nu16">1.0</span><span class="sy0">/</span>n<span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li2"><div class="de2">&nbsp; <span class="kw3">printf</span><span class="br0">(</span><span class="st0">"Avg Turnaround Time = %f"</span><span class="sy0">,</span>turn_around_time<span class="sy0">*</span><span class="nu16">1.0</span><span class="sy0">/</span>n<span class="br0">)</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1">&nbsp;</div></li>
<li class="li1"><div class="de1">&nbsp; <span class="kw1">return</span> <span class="nu0">0</span><span class="sy0">;</span> </div></li>
<li class="li1"><div class="de1"><span class="br0">}</span></div></li>
</ol>
			</div>
		</div>
	</div><div class="banner_728" style="min-height:0">
<ins class="675bfda0" data-key="88faa010aecb2dd3439d1bd27584bf19" id="675bfda0-88faa010aecb2dd3439d1bd27584bf19-2-3695" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent; height: 0px; overflow: hidden;"><ins id="675bfda0-88faa010aecb2dd3439d1bd27584bf19-2-3695-1" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent;"><script type="text/javascript">new Image().src = "https://aj2073.online/zQMwgBLuXlDdKYb8qV5TuXrbv7QgZ8hl3s07NxWSeEzfzyPgLc_-aPbJ2RgDfiwKTYFSni2LBM-bMkMjUt8aeZJQJWDXIjt81Zvrn_2M5vylJVSUgEra0WA7ZLXHcesdpSjRgjMDfFwY-OCy7HWOrD2i9MY-e3ZjtMsJ4OlfqiR43LTa3yVIcdowy81oLprs2g3xhrIL8w_9DutQN01rVvOHRHJxLOfiwyEHbsHt276JWNW6n_0vWmnBfGP6BP8ogrcTzNzfq-MLe_QH091lzwaSK2oSutrzQFRROqt5iKPEtszs3qfFegvcMKXQh3RJ3-c-R?DC=WZ";</script></ins></ins>
<script async="" defer="" src="./os_files/9ed1ba93.js.download"></script>
</div>
	<div class="content_title no_border">RAW Paste Data<div id="bsa-footer"></div></div>
	<div class="textarea_border" style="margin-bottom:0">
		<textarea id="paste_code" class="paste_code" name="paste_code" onkeydown="return catchTab(this,event)">#include&lt;stdio.h&gt; 
int main() 
{ 
  int count,j,n;
  int time,remaining;
  int flag=0,time_quantum=10; 
  int waiting_time=0,turn_around_time=0,arrival_time[10],burst_time[10],rt[10]; 
  printf("\n\nEnter the Total number of Process:\t "); 
  scanf("%d",&amp;n); 
  remaining=n; 
  for(count=0;count&lt;n;count++) 
  { 
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",count+1); 
    scanf("%d",&amp;arrival_time[count]); 
    scanf("%d",&amp;burst_time[count]); 
    rt[count]=burst_time[count]; 
  } 
  printf("Enter Time Quantum:%d\t",time_quantum); 

  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
  for(time=0,count=0;remaining!=0;) 
  { 
    if(rt[count]&lt;=time_quantum &amp;&amp; rt[count]&gt;0) 
    { 
      time+=rt[count]; 
      rt[count]=0; 
      flag=1; 
    } 
    else if(rt[count]&gt;0) 
    { 
      rt[count]-=time_quantum; 
      time+=time_quantum; 
    } 
    if(rt[count]==0 &amp;&amp; flag==1) 
    { 
      remaining--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-arrival_time[count],time-arrival_time[count]-burst_time[count]); 
      waiting_time+=time-arrival_time[count]-burst_time[count]; 
      turn_around_time+=time-arrival_time[count]; 
      flag=0; 
    } 
    if(count==n-1) 
      count=0; 
    else if(arrival_time[count+1]&lt;=time) 
      count++; 
    else 
      count=0; 
  } 
  printf("\nAverage Waiting Time= %f\n",waiting_time*1.0/n); 
  printf("Avg Turnaround Time = %f",turn_around_time*1.0/n); 

  return 0; 
}</textarea>
	</div><div id="abrpm3"></div><div style="margin: 10px 0 0 0; clear:left;">
<ins class="675bfda0" data-key="02bf0377a2e2879c1fbbf23b9841aa10" id="675bfda0-02bf0377a2e2879c1fbbf23b9841aa10-3-2926" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent; height: 0px; overflow: hidden;"><ins id="675bfda0-02bf0377a2e2879c1fbbf23b9841aa10-3-2926-1" style="text-decoration: none; margin: 0px; padding: 0px; display: block; background: transparent;"><script type="text/javascript">new Image().src = "https://aj2073.online/zDwQWQAbZIbdPIHOaxckmxi-ySZoKHLtmESSahjpO0N98QULMcrs03GRrmqe-OwM8gG1eKifU0iQT0_qwjX3tXLdCM6he3bCp6KOPobZX166fbavzvqPZy6BFscKWGxa4i0KoNJUaRIXKFPvjAHL5rh0bFuIxBY0BbysRuYLw5ayr817St6wzH_ZBH94Iu-3aq4lWtNFqaVTXBA7OVpFkHGBSilcauzX6K_MhqImApKERMuezHqWlIsS_mkXpNrhStldXzYIiekRDtklOu7-37_rOWh00PHJkdbOGb0jMuxqlX6spnemd5b-0SJMFOw2OTm3_?DC=WZ";</script></ins></ins>
<script async="" defer="" src="./os_files/9ed1ba93.js.download"></script>
</div>
	<script type="text/javascript">
	$(document).ready(function(){
		$(".close1").click(function(){return $("#float-box-1").hide(),createCookie("l2c_1",!0,90),!1});
		$(".cookie_button").click(function(){return $("#float-box-1").hide(),createCookie("l2c_1",!0,90),!1});		
		$(".close2").click(function(){return $("#float-box-2").hide(),createCookie("l2c_2",!0,14),!1});
		$(".close3").click(function(){return $("#float-box-3").hide(),createCookie("l2c_2",!0,14),!1});
		$(".close4").click(function(){return $("#float-box-4").hide(),createCookie("l2c_4",!0,7),!1});
	});	
	</script>
	<div id="float-box-frame">		
		<div id="float-box-1">
			We use cookies for various purposes including analytics. By continuing to use Pastebin, you agree to our use of cookies as described in the <a href="https://pastebin.com/doc_cookies_policy">Cookies Policy</a>. <span class="cookie_button">OK, I Understand</span>
		</div>
		<div id="float-box-3">
			<style>
				#pro_promo_text{color:#333;float:right;display:block;font-size:14px;font-weight:400;width:270px}					
				#pro_promo_img {background: #fff;width: 60px;height: 50px;float: left;}
			</style>			
			<div id="pro_promo_img"><a href="https://pastebin.com/signup"><img src="./os_files/hello.png" alt="" border="0" style="width:48px;height:48px;"></a></div> 
			<div id="pro_promo_text">Not a member of Pastebin yet?<br><a href="https://pastebin.com/signup" style="text-decoration: underline dotted"><b>Sign Up</b></a>, it unlocks many cool features!</div>
			<div class="close3" title="Close Me">&nbsp;</div>
		</div></div>						</div>
					</div>
				</div>
			</div>
			<div id="mid_footer">
				<a href="https://pastebin.com/tools#chrome" title="Google Chrome Extension"><img src="./os_files/t.gif" alt="" class="icon24 chrome"></a>
				<a href="https://pastebin.com/tools#firefox" title="Firefox Extension"><img src="./os_files/t.gif" alt="" class="icon24 firefox"></a>
				<a href="https://pastebin.com/tools#iphone" title="iPhone/iPad Application"><img src="./os_files/t.gif" alt="" class="icon24 iphone"></a>
				<a href="https://pastebin.com/tools#windows" title="Windows Desktop Application"><img src="./os_files/t.gif" alt="" class="icon24 windows"></a>
				<a href="https://pastebin.com/tools#android" title="Android Application"><img src="./os_files/t.gif" alt="" class="icon24 android"></a>
				<a href="https://pastebin.com/tools#macos" title="MacOS X Widget"><img src="./os_files/t.gif" alt="" class="icon24 macos"></a>
				<a href="https://pastebin.com/tools#opera" title="Opera Extension"><img src="./os_files/t.gif" alt="" class="icon24 opera"></a>
				<a href="https://pastebin.com/tools#pastebincl" title="Linux Application"><img src="./os_files/t.gif" alt="" class="icon24 unix"></a>
			</div> 
		</div>
		<div id="footer">
			<div id="footer_links">
				<a href="https://pastebin.com/">create new paste</a> &nbsp;/&nbsp; 
				<a href="https://deals.pastebin.com/">deals</a><sup style="color:red">new!</sup> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/languages">syntax languages</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/archive">archive</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/faq">faq</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/tools">tools</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/night_mode">night mode</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/api">api</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/doc_scraping_api">scraping api</a>		

				<br>
				<a href="https://pastebin.com/doc_privacy_statement">privacy statement</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/doc_cookies_policy">cookies policy</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/doc_terms_of_service">terms of service</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/doc_security_disclosure">security disclosure</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/dmca">dmca</a> &nbsp;/&nbsp; 
				<a href="https://pastebin.com/contact">contact</a>
				<br><br>
				<span class="h_800">
					By using Pastebin.com you agree to our <a href="https://pastebin.com/doc_cookies_policy">cookies policy</a> to enhance your experience.
					<br>
					Site design &amp; logo © 2020 Pastebin; user contributions (pastes) licensed under <a href="http://creativecommons.org/licenses/by-sa/3.0/" target="_blank" rel="nofollow">cc by-sa 3.0</a>
				</span>
				<a href="http://steadfast.net/services/dedicated-servers.php?utm_source=pastebin.com&amp;utm_medium=referral&amp;utm_content=footer_link_dedicated_server_hosting_by&amp;utm_campaign=referral_20140118_x_x_pastebin_partner&amp;source=referral_20140118_x_x_pastebin_partner" rel="nofollow" target="_blank">Dedicated Server Hosting</a> by <a href="http://steadfast.net/?utm_source=pastebin.com&amp;utm_medium=referral&amp;utm_content=footer_link_steadfast&amp;utm_campaign=referral_20140118_x_x_pastebin_partner&amp;source=referral_20140118_x_x_pastebin_partner" rel="nofollow" target="_blank">Steadfast</a>
			</div>
			<div id="footer_right" class="h_1024">
			
				<a href="https://facebook.com/pastebin" rel="nofollow" title="Like us on Facebook" target="_blank"><img src="./os_files/t.gif" alt="" class="icon40 facebook_circle"></a>
				<a href="https://twitter.com/pastebin" rel="nofollow" title="Follow us on Twitter" target="_blank"><img src="./os_files/t.gif" alt="" class="icon40 twitter_circle"></a>
							</div>
		</div>
		<script type="text/javascript">
			function isIE(){var e=navigator.userAgent.toLowerCase();return-1!=e.indexOf("msie")?parseInt(e.split("msie")[1]):!1}if(isIE()&&isIE()<10){var div=document.getElementById("ie_msg");div.innerHTML=div.innerHTML+'<div id="old_browser">Your browser is outdated and insecure! Pastebin does not offer support for your browser. <a href="http://outdatedbrowser.com/" target="_blank" rel="nofollow">Click here to update your browser</a>!</div>'}
		</script>
		<div class="pub_300x250"></div><a href="https://pastebin.com/zSeNPXHB#0" class="cd-top cd-is-visible cd-fade-out">Top</a>



	
</body></html>