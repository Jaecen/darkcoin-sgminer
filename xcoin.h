#ifndef SCRYPT_H
#define SCRYPT_H

#include "miner.h"

extern int xcoin_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void xcoin_regenhash(struct work *work);

#endif /* SCRYPT_H */
