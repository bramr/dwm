/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "?";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	{ cpu_perc, "CPU: %s%%| ", NULL },
	{ ram_perc, "RAM: %s%%| ", NULL },
	{ ipv4, "IP: %s| ", "wlp2s0"},
	{ wifi_perc, "WIFI: %s%%| ", "wlp2s0"},
	{ datetime, "%s", "%a %b %d %T" },
};
