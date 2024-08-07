extern void *xlnt_genxSetPrettyPrint;
extern void *nanovg_nvgTextAlign;
extern void *libmikmod_MikMod_Lock;
extern void *chipmunk_cpPolylineFree;

int main(int argc, char **argv) {
    ((void (*)())xlnt_genxSetPrettyPrint)();
    ((void (*)())nanovg_nvgTextAlign)();
    ((void (*)())libmikmod_MikMod_Lock)();
    ((void (*)())chipmunk_cpPolylineFree)();

    return 0;
}
