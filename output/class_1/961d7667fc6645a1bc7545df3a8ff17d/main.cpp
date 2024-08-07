extern void *binn_binn_get_bool;
extern void *nanovg_nvgTextAlign;
extern void *libvmdk_libcnotify_print_data;
extern void *zstd_ZSTDv05_getFrameParams;

int main(int argc, char **argv) {
    ((void (*)())binn_binn_get_bool)();
    ((void (*)())nanovg_nvgTextAlign)();
    ((void (*)())libvmdk_libcnotify_print_data)();
    ((void (*)())zstd_ZSTDv05_getFrameParams)();

    return 0;
}
