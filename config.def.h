/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;           /* -b option; if 0, dmenu appears at bottom */
static int fuzzy = 1;            /* -F option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 0;         /* -c option; centers dmenu on screen */
static int colorprompt = 1;      /* -p option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int min_width = 350;      /* minimum width when centered */
static int max_width = 1000;     /* maximum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "DejaVu Sans Mono:size:pixelsize=15:antialias=true:autohint=true",
    "Font Awesome 6 Free Solid:size:pixelsize=12:antialias=true:autohint=true"
};

static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*                  fg         bg       */
	[SchemeNorm]   = { "#e0dbd2", "#191b28" },
	[SchemeSel]    = { "#e0dbd2", "#563d7c" },
	[SchemePrompt] = { "#e0dbd2", "#3e4050" },
	[SchemeInput]  = { "#e0dbd2", "#2a2c39" },
	[SchemeOut]    = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -lh option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
