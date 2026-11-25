# objdiff base build for the hand-reconstructed units.
#
# objdiff compares two relocatable objects. This target produces the "base"
# (rebuilt) side with clang-cl, so the object carries the MSVC x64 ABI and
# mangling that the retail image was built with. The retail ("target") side
# still has to come from a matching build; until then objdiff can load the unit
# and diff nothing.
#
#   make -f objdiff.build.mk            # build every unit
#   make -f objdiff.build.mk clean
#
# clang-cl on Linux has no MSVC standard library, so build/compat supplies the
# four headers the recovered code needs.

CLANG_CL ?= clang-cl
CXXFLAGS ?= /nologo /c /O2 /GS- /Gy /GR- /std:c++17 /W3 /I build/compat
OUT      ?= build

UNITS := \
	$(OUT)/rage/base/file/packfile.obj \
	$(OUT)/rage/base/data/aes.obj \
	$(OUT)/game/Core/FUN_14087b0f0.obj

.PHONY: all clean
all: $(UNITS)

$(OUT)/rage/base/file/packfile.obj: src/sub_story/rage/base/file/packfile.cpp \
		src/sub_story/rage/base/file/packfile_crypt.h \
		src/sub_story/rage/base/data/aes.h
	@mkdir -p $(dir $@)
	$(CLANG_CL) $(CXXFLAGS) /Fo:$@ $<

$(OUT)/rage/base/data/aes.obj: src/sub_story/rage/base/data/aes.cpp \
		src/sub_story/rage/base/data/aes.h
	@mkdir -p $(dir $@)
	$(CLANG_CL) $(CXXFLAGS) /Fo:$@ $<

$(OUT)/game/Core/FUN_14087b0f0.obj: \
		src/sub_story/game/Core/FUN_14087b0f0/FUN_14087b0f0.cpp
	@mkdir -p $(dir $@)
	$(CLANG_CL) $(CXXFLAGS) /Fo:$@ $<

clean:
	rm -f $(UNITS)
