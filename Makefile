default: clean 
	# TODO: integrate with cmake

configure-cmake:
	cmake --preset Unix

build: 
	# TODO: integrate with cmake

test: configure-cmake
	cmake --build ./build --target GC_test
	cd build && ctest

memtest:
	# TODO: integrate with cmake

demo:
	# TODO: integrate with cmake

clean:
	# TODO: integrate with cmake

PHONY: clean default test memtest demo
