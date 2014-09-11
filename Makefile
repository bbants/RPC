BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp
LNK=ln
EPROSIMADIR=$(BASEDIR)/thirdparty/eProsima

ifdef NDDSHOME
-include $(EPROSIMADIR)/building/makefiles/dds.mk
else
ifdef DDS_ROOT
-include $(EPROSIMADIR)/building/makefiles/opendds.mk
endif
endif
-include $(BASEDIR)/building/makefiles/fastrpc.mk
-include $(BASEDIR)/building/makefiles/rpcdds.mk
-include $(BASEDIR)/building/makefiles/rpcrest.mk

.PHONY: all

all: fastrpc rpcdds rpcrest

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
