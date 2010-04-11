/*
 * Linking module for PuTTYtel: list the available backends not
 * including ssh.
 */

#include <stdio.h>
#include "putty.h"

const int be_default_protocol = PROT_TELNET;

const char *const appname = "PuTTYtel";

Backend *backends[] = {
    &telnet_backend,
    &rlogin_backend,
    &raw_backend,
    &serial_backend,
    &cygterm_backend,
    NULL
};

/*
 * Stub implementations of functions not used in non-ssh versions.
 */
void random_save_seed(void)
{
}

void random_destroy_seed(void)
{
}

void noise_ultralight(unsigned long data)
{
}

void noise_get_heavy(void (*func) (void *, int))
{
}

void noise_get_light(void (*func) (void *, int))
{
}

void noise_get_regular(void (*func) (void *, int))
{
}

void noise_regular(void)
{
}
