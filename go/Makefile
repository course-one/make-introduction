# source files (expand using `wildcard` command)
SOURCE_FILES := $(wildcard src/*.go)

# define `PHONY` targets
.PHONY: all darwin windows

#--------------------------------------#

# build for all platforms
all: darwin windows

#--------------------------------------#

# build for macOS (darwin)
darwin: dist/darwin_amd64.out dist/darwin_386.out

dist/darwin_amd64.out: $(SOURCE_FILES)
	GOOS=darwin OSARCH=amd64 go build -o $@ $(SOURCE_FILES)

dist/darwin_386.out: $(SOURCE_FILES)
	GOOS=darwin OSARCH=386 go build -o $@ $(SOURCE_FILES)

#--------------------------------------#

# build for windows
windows: dist/windows_x86_64.exe dist/windows_x86.exe

dist/windows_x86_64.exe: $(SOURCE_FILES)
	GOOS=windows OSARCH=amd64 go build -o $@ $(SOURCE_FILES)

dist/windows_x86.exe: $(SOURCE_FILES)
	GOOS=windows OSARCH=386 go build -o $@ $(SOURCE_FILES)

#--------------------------------------#

# clean `.out` and `.exe` files
.PHONY: clean
clean:
	rm -f dist/*.out dist/*.exe