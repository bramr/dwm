/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 256

static const struct arg args[] = {
	/* function format          argument */
	{ cpu_perc, "  %s%%  ", NULL },
	{ ram_perc,  " %s%%  ", NULL },
	{ disk_perc,  " %s%%  ", "/" },
	{ ipv4, " %s  ", "wlp2s0"},
	{ wifi_perc, " %s%%  ", "wlp2s0"},
	{ datetime, " %s", "%a %b %d %T" },
};
