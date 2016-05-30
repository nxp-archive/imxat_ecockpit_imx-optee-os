subdirs-y += kernel
subdirs-y += tee
subdirs-y += drivers

gensrcs-y += ta_pub_key
produce-ta_pub_key = ta_pub_key.c
depends-ta_pub_key = $(TA_SIGN_KEY)
recipe-ta_pub_key = scripts/pem_to_pub_c.py --prefix ta_pub_key \
		--key $(TA_SIGN_KEY) --out $(sub-dir-out)/ta_pub_key.c
