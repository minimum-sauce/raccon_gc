# This adds source files to the target after it has been defined. 
# Note that this will not work in Cmake versions prior to 3.13 due to relative paths being relative to the top level directory
# where the target was defined. 
target_sources(GC_test PRIVATE 
    template/template.c
)