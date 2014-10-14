
#include <sifteo.h>
#include "phonemic.h"
#include "word_families.h"

WordFamily wordFamilies[] = {
     /* {{
        // cab,crab,dab,gab,grab,jab,nab,tab,
        { PAIR(k,c), PAIR(ab,ab),  -1 },
        { PAIR(k,c), PAIR(r,r), PAIR(ab,ab),  -1 },
        { PAIR(d,d), PAIR(ab,ab),  -1 },
        { PAIR(g,g), PAIR(ab,ab),  -1 },
        { PAIR(g,g), PAIR(r,r), PAIR(ab,ab),  -1 },
        { PAIR(j,j), PAIR(ab,ab),  -1 },
        { PAIR(n,n), PAIR(ab,ab),  -1 },
        { PAIR(t,t), PAIR(ab,ab),  -1 },
   }},
   {{
        // bad,dad,had,lad,mad,pad,sad,glad
        { PAIR(b,b), PAIR(ad,ad),  -1 },
        { PAIR(d,d), PAIR(ad,ad),  -1 },
        { PAIR(h,h), PAIR(ad,ad),  -1 },
        { PAIR(l,l), PAIR(ad,ad),  -1 },
        { PAIR(m,m), PAIR(ad,ad),  -1 },
        { PAIR(p,p), PAIR(ad,ad),  -1 },
        { PAIR(s,s), PAIR(ad,ad),  -1 },
        { PAIR(g,g), PAIR(l,l), PAIR(ad,ad),  -1 },
   }},
   {{
        // bag,drag,flag,nag,rag,sag,tag,wag
        { PAIR(b,b), PAIR(ag,ag),  -1 },
        { PAIR(d,d), PAIR(r,r), PAIR(ag,ag),  -1 },
        { PAIR(f,f), PAIR(l,l), PAIR(ag,ag),  -1 },
        { PAIR(n,n), PAIR(ag,ag),  -1 },
        { PAIR(r,r), PAIR(ag,ag),  -1 },
        { PAIR(s,s), PAIR(ag,ag),  -1 },
        { PAIR(t,t), PAIR(ag,ag),  -1 },
        { PAIR(w,w), PAIR(ag,ag),  -1 },
   }},
   {{
        // clam,dam,ham,jam,ram,Sam,slam,swam
        { PAIR(k,c), PAIR(l,l), PAIR(am,am),  -1 },
        { PAIR(d,d), PAIR(am,am),  -1 },
        { PAIR(h,h), PAIR(am,am),  -1 },
        { PAIR(j,j), PAIR(am,am),  -1 },
        { PAIR(r,r), PAIR(am,am),  -1 },
        { PAIR(s,S), PAIR(am,am),  -1 },
        { PAIR(s,s), PAIR(l,l), PAIR(am,am),  -1 },
        { PAIR(s,s), PAIR(w,w), PAIR(am,am),  -1 },
   }},
   {{
        // ban,can,fan,man,pan,ran,tan,van
        { PAIR(b,b), PAIR(an,an),  -1 },
        { PAIR(k,c), PAIR(an,an),  -1 },
        { PAIR(f,f), PAIR(an,an),  -1 },
        { PAIR(m,m), PAIR(an,an),  -1 },
        { PAIR(p,p), PAIR(an,an),  -1 },
        { PAIR(r,r), PAIR(an,an),  -1 },
        { PAIR(t,t), PAIR(an,an),  -1 },
        { PAIR(v,v), PAIR(an,an),  -1 },
   }},
   {{
        // cap,clap,gap,lap,map,nap,snap,tap
        { PAIR(k,c), PAIR(ap,ap),  -1 },
        { PAIR(k,c), PAIR(l,l), PAIR(ap,ap),  -1 },
        { PAIR(g,g), PAIR(ap,ap),  -1 },
        { PAIR(l,l), PAIR(ap,ap),  -1 },
        { PAIR(m,m), PAIR(ap,ap),  -1 },
        { PAIR(n,n), PAIR(ap,ap),  -1 },
        { PAIR(s,s), PAIR(n,n), PAIR(ap,ap),  -1 },
        { PAIR(t,t), PAIR(ap,ap),  -1 },
   }},*/
   {{
        // bat,cat,fat,hat,mat,pat,rat,sat
        //{ PAIR(b,b), PAIR(at,at),  -1 },
        { PAIR(k,c), PAIR(at,at),  -1 },
        //{ PAIR(f,f), PAIR(at,at),  -1 },
        //{ PAIR(h,h), PAIR(at,at),  -1 },
        //{ PAIR(m,m), PAIR(at,at),  -1 },
        //{ PAIR(p,p), PAIR(at,at),  -1 },
        //{ PAIR(r,r), PAIR(at,at),  -1 },
        //{ PAIR(s,s), PAIR(at,at),  -1 },
   }},
   /*
   {{
        // bed,fed,led,red,shed,sled,sped,wed
        { PAIR(b,b), PAIR(ed,ed),  -1 },
        { PAIR(f,f), PAIR(ed,ed),  -1 },
        { PAIR(l,l), PAIR(ed,ed),  -1 },
        { PAIR(r,r), PAIR(ed,ed),  -1 },
        { PAIR(s,s), PAIR(h,h), PAIR(ed,ed),  -1 },
        { PAIR(s,s), PAIR(l,l), PAIR(ed,ed),  -1 },
        { PAIR(s,s), PAIR(p,p), PAIR(ed,ed),  -1 },
        { PAIR(w,w), PAIR(ed,ed), -1 },
   }},
   {{
        // bell,fell,sell,shell,spell,tell,well,yell
        { PAIR(b,b), PAIR(ell,ell),  -1 },
        { PAIR(f,f), PAIR(ell,ell),  -1 },
        { PAIR(s,s), PAIR(ell,ell),  -1 },
        { PAIR(sh,sh), PAIR(ell,ell),  -1 },
        { PAIR(s,s), PAIR(p,p), PAIR(ell,ell),  -1 },
        { PAIR(t,t), PAIR(ell,ell),  -1 },
        { PAIR(w,w), PAIR(ell,ell),  -1 },
        { PAIR(y,y), PAIR(ell,ell),  -1 },
    }}, 
    {{
        // den,hen,Ken,men,pen,ten,then,when,
        { PAIR(d,d), PAIR(en,en),  -1 },
        { PAIR(h,h), PAIR(en,en),  -1 },
        { PAIR(k,K), PAIR(en,en),  -1 },
        { PAIR(m,m), PAIR(en,en),  -1 },
        { PAIR(p,p), PAIR(en,en),  -1 },
        { PAIR(t,t), PAIR(en,en),  -1 },
        { PAIR(th_voiced,th), PAIR(en,en),  -1 },
        { PAIR(wh,wh), PAIR(en,en),  -1 },
   }},
   {{
        // bet,get,jet,met,net,pet,vet,wet,
        { PAIR(b,b), PAIR(et,et),  -1 },
        { PAIR(g,g), PAIR(et,et),  -1 },
        { PAIR(j,j), PAIR(et,et),  -1 },
        { PAIR(m,m), PAIR(et,et),  -1 },
        { PAIR(n,n), PAIR(et,et),  -1 },
        { PAIR(p,p), PAIR(et,et),  -1 },
        { PAIR(v,v), PAIR(et,et),  -1 },
        { PAIR(w,w), PAIR(et,et),  -1 },
   }}, 
   
   {{
        // big,dig,fig,gig,jig,pig,rig,wig,
        { PAIR(b,b), PAIR(ig,ig),  -1 },
        { PAIR(d,d), PAIR(ig,ig),  -1 },
        { PAIR(f,f), PAIR(ig,ig),  -1 },
        { PAIR(g,g), PAIR(ig,ig),  -1 },
        { PAIR(j,j), PAIR(ig,ig),  -1 },
        { PAIR(p,p), PAIR(ig,ig),  -1 },
        { PAIR(r,r), PAIR(ig,ig),  -1 },
        { PAIR(w,w), PAIR(ig,ig),  -1 },
   }},
   {{
        // bid,did,hid,kid,lid,rid,skid,slid,
        { PAIR(b,b), PAIR(id,id),  -1 },
        { PAIR(d,d), PAIR(id,id),  -1 },
        { PAIR(h,h), PAIR(id,id),  -1 },
        { PAIR(k,k), PAIR(id,id),  -1 },
        { PAIR(l,l), PAIR(id,id),  -1 },
        { PAIR(r,r), PAIR(id,id),  -1 },
        { PAIR(s,s), PAIR(k,k), PAIR(id,id),  -1 },
        { PAIR(s,s), PAIR(l,l), PAIR(id,id),  -1 },
   }},
   {{
        // bin,din,fin,grin,pin,spin,tin,win,
        { PAIR(b,b), PAIR(in,in),  -1 },
        { PAIR(d,d), PAIR(in,in),  -1 },
        { PAIR(f,f), PAIR(in,in),  -1 },
        { PAIR(g,g), PAIR(r,r), PAIR(in,in),  -1 },
        { PAIR(p,p), PAIR(in,in),  -1 },
        { PAIR(s,s), PAIR(p,p), PAIR(in,in),  -1 },
        { PAIR(t,t), PAIR(in,in),  -1 },
        { PAIR(w,w), PAIR(in,in),  -1 },
   }},
   {{
        // bill,fill,gill,hill,will,pill,chill,still,
        { PAIR(b,b), PAIR(ill,ill),  -1 },
        { PAIR(f,f), PAIR(ill,ill),  -1 },
        { PAIR(g,g), PAIR(ill,ill),  -1 },
        { PAIR(h,h), PAIR(ill,ill),  -1 },
        { PAIR(w,w), PAIR(ill,ill),  -1 },
        { PAIR(p,p), PAIR(ill,ill),  -1 },
        { PAIR(ch,ch), PAIR(ill,ill),  -1 },
        { PAIR(s,s), PAIR(t,t), PAIR(ill,ill),  -1 },
   }},
   {{
        // dip,hip,lip,rip,sip,tip,zip,ship,
        { PAIR(d,d), PAIR(ip,ip),  -1 },
        { PAIR(h,h), PAIR(ip,ip),  -1 },
        { PAIR(l,l), PAIR(ip,ip),  -1 },
        { PAIR(r,r), PAIR(ip,ip),  -1 },
        { PAIR(s,s), PAIR(ip,ip),  -1 },
        { PAIR(t,t), PAIR(ip,ip),  -1 },
        { PAIR(z,z), PAIR(ip,ip),  -1 },
        { PAIR(sh,sh), PAIR(ip,ip),  -1 },
   }},
   {{
        // bit,fit,hit,kit,pit,quit,sit,wit,
        { PAIR(b,b), PAIR(it,it),  -1 },
        { PAIR(f,f), PAIR(it,it),  -1 },
        { PAIR(h,h), PAIR(it,it),  -1 },
        { PAIR(k,k), PAIR(it,it),  -1 },
        { PAIR(p,p), PAIR(it,it),  -1 },
        { PAIR(kw,qu), PAIR(it,it),  -1 },
        { PAIR(s,s), PAIR(it,it),  -1 },
        { PAIR(w,w), PAIR(it,it),  -1 },
   }},
   
   {{
        // blob,bob,cob,glob,job,mob,rob,sob,
        { PAIR(b,b), PAIR(l,l), PAIR(ob,ob),  -1 },
        { PAIR(b,b), PAIR(ob,ob),  -1 },
        { PAIR(k,c), PAIR(ob,ob),  -1 },
        { PAIR(g,g), PAIR(l,l), PAIR(ob,ob),  -1 },
        { PAIR(j,j), PAIR(ob,ob),  -1 },
        { PAIR(m,m), PAIR(ob,ob),  -1 },
        { PAIR(r,r), PAIR(ob,ob),  -1 },
        { PAIR(s,s), PAIR(ob,ob),  -1 },
   }},
   {{
        // dog,clog,fog,frog,hog,jog,log,smog,
        { PAIR(d,d), PAIR(og,og),  -1 },
        { PAIR(k,c), PAIR(l,l), PAIR(og,og),  -1 },
        { PAIR(f,f), PAIR(og,og),  -1 },
        { PAIR(f,f), PAIR(r,r), PAIR(og,og),  -1 },
        { PAIR(h,h), PAIR(og,og),  -1 },
        { PAIR(j,j), PAIR(og,og),  -1 },
        { PAIR(l,l), PAIR(og,og),  -1 },
        { PAIR(s,s), PAIR(m,m), PAIR(og,og),  -1 },
   }},
   {{
        // bop,cop,drop,hop,mop,pop,stop,top,
        { PAIR(b,b), PAIR(op,op),  -1 },
        { PAIR(k,c), PAIR(op,op),  -1 },
        { PAIR(d,d), PAIR(r,r), PAIR(op,op),  -1 },
        { PAIR(h,h), PAIR(op,op),  -1 },
        { PAIR(m,m), PAIR(op,op),  -1 },
        { PAIR(p,p), PAIR(op,op),  -1 },
        { PAIR(s,s), PAIR(t,t), PAIR(op,op),  -1 },
        { PAIR(t,t), PAIR(op,op),  -1 },
   }},
   {{
        // cot,dot,hot,lot,not,pot,spot,tot,
        { PAIR(k,c), PAIR(ot,ot),  -1 },
        { PAIR(d,d), PAIR(ot,ot),  -1 },
        { PAIR(h,h), PAIR(ot,ot),  -1 },
        { PAIR(l,l), PAIR(ot,ot),  -1 },
        { PAIR(n,n), PAIR(ot,ot),  -1 },
        { PAIR(p,p), PAIR(ot,ot),  -1 },
        { PAIR(s,s), PAIR(p,p), PAIR(ot,ot),  -1 },
        { PAIR(t,t), PAIR(ot,ot),  -1 },
   }},

   {{
        // cub,club,grub, nub,rub,sub,stub,tub,
        { PAIR(k,c), PAIR(ub,ub),  -1 },
        { PAIR(k,c), PAIR(l,l), PAIR(ub,ub),  -1 },
        { PAIR(g,g), PAIR(r,r), PAIR(ub,ub),  -1 },
        { PAIR(n,n), PAIR(ub,ub),  -1 },
        { PAIR(r,r), PAIR(ub,ub),  -1 },
        { PAIR(s,s), PAIR(ub,ub),  -1 },
        { PAIR(s,s), PAIR(t,t), PAIR(ub,ub),  -1 },
        { PAIR(t,t), PAIR(ub,ub),  -1 },
   }},
   {{
        // bug,chug,lug,dug,drug,hug,mug,rug,
        { PAIR(b,b), PAIR(ug,ug),  -1 },
        { PAIR(ch,ch), PAIR(ug,ug),  -1 },
        { PAIR(l,l), PAIR(ug,ug),  -1 },
        { PAIR(d,d), PAIR(ug,ug),  -1 },
        { PAIR(d,d), PAIR(r,r), PAIR(ug,ug),  -1 },
        { PAIR(h,h), PAIR(ug,ug),  -1 },
        { PAIR(m,m), PAIR(ug,ug),  -1 },
        { PAIR(r,r), PAIR(ug,ug),  -1 },
   }},
   {{
        // bum,chum,drum,gum,glum,hum,plum,sum,
        { PAIR(b,b), PAIR(um,um),  -1 },
        { PAIR(ch,ch), PAIR(um,um),  -1 },
        { PAIR(d,d), PAIR(r,r), PAIR(um,um),  -1 },
        { PAIR(g,g), PAIR(um,um),  -1 },
        { PAIR(g,g), PAIR(l,l), PAIR(um,um),  -1 },
        { PAIR(h,h), PAIR(um,um),  -1 },
        { PAIR(p,p), PAIR(l,l), PAIR(um,um),  -1 },
        { PAIR(s,s), PAIR(um,um),  -1 },
   }},
   {{
        // bun,fun,nun,pun,run,spun,stun,sun,
        { PAIR(b,b), PAIR(un,un),  -1 },
        { PAIR(f,f), PAIR(un,un),  -1 },
        { PAIR(n,n), PAIR(un,un),  -1 },
        { PAIR(p,p), PAIR(un,un),  -1 },
        { PAIR(r,r), PAIR(un,un),  -1 },
        { PAIR(s,s), PAIR(p,p), PAIR(un,un),  -1 },
        { PAIR(s,s), PAIR(t,t), PAIR(un,un),  -1 },
        { PAIR(s,s), PAIR(un,un),  -1 },
   }},*/

   
};
/*
		{}
	},
	{   
		{
			{"ag", 	&ChunkSound_ag, {&ChunkImage_ag[0], &ChunkImage_ag[1]}},
			{"b", 	&Phoneme_b, {&Grapheme_b[0], &Grapheme_b[1]}},
			{"d", 	&Phoneme_d, {&Grapheme_d[0], &Grapheme_d[1]}},
			{"r", 	&Phoneme_r, {&Grapheme_r[0], &Grapheme_r[1]}},
			{"f", 	&Phoneme_f, {&Grapheme_f[0], &Grapheme_f[1]}},
			{"l", 	&Phoneme_l, {&Grapheme_l[0], &Grapheme_l[1]}},
			{"n", 	&Phoneme_n, {&Grapheme_n[0], &Grapheme_n[1]}},
			{"s", 	&Phoneme_s, {&Grapheme_s[0], &Grapheme_s[1]}},
            {"t", 	&Phoneme_t, {&Grapheme_t[0], &Grapheme_t[1]}},
			{"w", 	&Phoneme_w, {&Grapheme_w[0], &Grapheme_w[1]}},
		},
		{"bag", "drag", "flag", "nag", "rag", "sag", "tag", "wag"}
	},
	{   
		{
			{"am", 	&ChunkSound_am, {&ChunkImage_am[0], &ChunkImage_am[1]}},
			{"c", 	&Phoneme_k, {&Grapheme_c[0], &Grapheme_c[1]}},
			{"l", 	&Phoneme_l, {&Grapheme_l[0], &Grapheme_l[1]}},
			{"d", 	&Phoneme_d, {&Grapheme_d[0], &Grapheme_d[1]}},
			{"h", 	&Phoneme_h, {&Grapheme_h[0], &Grapheme_h[1]}},
			{"j", 	&Phoneme_j, {&Grapheme_j[0], &Grapheme_j[1]}},
			{"r", 	&Phoneme_r, {&Grapheme_r[0], &Grapheme_r[1]}},
			{"S", 	&Phoneme_s, {&Grapheme_S[0], &Grapheme_S[1]}},
			{"s", 	&Phoneme_s, {&Grapheme_s[0], &Grapheme_s[1]}},
            {"l", 	&Phoneme_l, {&Grapheme_l[0], &Grapheme_l[1]}},
			{"w", 	&Phoneme_w, {&Grapheme_w[0], &Grapheme_w[1]}},
		},
		{"clam", "dam", "ham", "jam", "ram", "Sam", "slam", "swam"}
	},
	{   
		{
			{"an", 	&ChunkSound_an, {&ChunkImage_an[0], &ChunkImage_an[1]}},
			{"b", 	&Phoneme_b, {&Grapheme_b[0], &Grapheme_b[1]}},
			{"c", 	&Phoneme_k, {&Grapheme_c[0], &Grapheme_c[1]}},
			{"f", 	&Phoneme_f, {&Grapheme_f[0], &Grapheme_f[1]}},
			{"m", 	&Phoneme_m, {&Grapheme_m[0], &Grapheme_m[1]}},
			{"p", 	&Phoneme_p, {&Grapheme_p[0], &Grapheme_p[1]}},
			{"r", 	&Phoneme_r, {&Grapheme_r[0], &Grapheme_r[1]}},
			{"t", 	&Phoneme_t, {&Grapheme_t[0], &Grapheme_t[1]}},
			{"v", 	&Phoneme_v, {&Grapheme_v[0], &Grapheme_v[1]}},
		},
		{"ban", "can", "fan", "man", "pan", "ran", "tan", "van"}
	},
	{   
		{
			{"ap", 	&ChunkSound_ap, {&ChunkImage_ap[0], &ChunkImage_ap[1]}},
			{"c", 	&Phoneme_k, {&Grapheme_c[0], &Grapheme_c[1]}},
            {"l", 	&Phoneme_l, {&Grapheme_l[0], &Grapheme_l[1]}},
			{"g", 	&Phoneme_g, {&Grapheme_g[0], &Grapheme_g[1]}},
			{"m", 	&Phoneme_m, {&Grapheme_m[0], &Grapheme_m[1]}},
			{"n", 	&Phoneme_n, {&Grapheme_n[0], &Grapheme_n[1]}},
			{"s", 	&Phoneme_s, {&Grapheme_s[0], &Grapheme_s[1]}},
			{"t", 	&Phoneme_t, {&Grapheme_t[0], &Grapheme_t[1]}},
		},
		{"cap", "clap", "gap", "lap", "map", "nap", "snap", "tap"}
	},
	{   
		{
			{"at", 	&ChunkSound_at, {&ChunkImage_at[0], &ChunkImage_at[1]}},
			{"b", 	&Phoneme_b, {&Grapheme_b[0], &Grapheme_b[1]}},
            {"c", 	&Phoneme_k, {&Grapheme_c[0], &Grapheme_c[1]}},
			{"f", 	&Phoneme_f, {&Grapheme_f[0], &Grapheme_f[1]}},
			{"h", 	&Phoneme_h, {&Grapheme_h[0], &Grapheme_h[1]}},
			{"m", 	&Phoneme_m, {&Grapheme_m[0], &Grapheme_m[1]}},
			{"p", 	&Phoneme_p, {&Grapheme_p[0], &Grapheme_p[1]}},
			{"r", 	&Phoneme_r, {&Grapheme_r[0], &Grapheme_r[1]}},
			{"s", 	&Phoneme_s, {&Grapheme_s[0], &Grapheme_s[1]}},
		},
		{"bat", "cat", "fat", "hat", "mat", "pat", "rat", "sat"}
	},
	{   
		{
			{"ed", 	&ChunkSound_ed, {&ChunkImage_ed[0], &ChunkImage_ed[1]}},
			{"b", 	&Phoneme_b, {&Grapheme_b[0], &Grapheme_b[1]}},
            {"f", 	&Phoneme_f, {&Grapheme_f[0], &Grapheme_f[1]}},
            {"l", 	&Phoneme_l, {&Grapheme_l[0], &Grapheme_l[1]}},
			{"r", 	&Phoneme_r, {&Grapheme_r[0], &Grapheme_r[1]}},
			{"s", 	&Phoneme_s, {&Grapheme_s[0], &Grapheme_s[1]}},
			{"h", 	&Phoneme_h, {&Grapheme_h[0], &Grapheme_h[1]}},
			{"p", 	&Phoneme_p, {&Grapheme_p[0], &Grapheme_p[1]}},
			{"w", 	&Phoneme_w, {&Grapheme_w[0], &Grapheme_w[1]}},
		},
		{"bed", "fed", "led", "red", "shed", "sled", "sped", "wed"}
	},
	{   
		{
			{"ell", 	&ChunkSound_ell, {&ChunkImage_ell[0], &ChunkImage_ell[1]}},
			{"b", 	&Phoneme_b, {&Grapheme_b[0], &Grapheme_b[1]}},
            {"f", 	&Phoneme_f, {&Grapheme_f[0], &Grapheme_f[1]}},
			{"s", 	&Phoneme_s, {&Grapheme_s[0], &Grapheme_s[1]}},
			{"h", 	&Phoneme_h, {&Grapheme_h[0], &Grapheme_h[1]}},
			{"p", 	&Phoneme_p, {&Grapheme_p[0], &Grapheme_p[1]}},
            {"t", 	&Phoneme_t, {&Grapheme_t[0], &Grapheme_t[1]}},
			{"w", 	&Phoneme_w, {&Grapheme_w[0], &Grapheme_w[1]}},
			{"y", 	&Phoneme_y, {&Grapheme_y[0], &Grapheme_y[1]}},
		},
		{"bell", "fell", "sell", "shell", "spell", "tell", "well", "yell"}
	}
};*/
