extern void *harfbuzz_hb_face_set_user_data;
extern void *zopfli_ZopfliLZ77Greedy;
extern void *solid3_qh_flippedmerges;
extern void *wavelib_setDWPTExtension;

int main(int argc, char **argv) {
    ((void (*)())harfbuzz_hb_face_set_user_data)();
    ((void (*)())zopfli_ZopfliLZ77Greedy)();
    ((void (*)())solid3_qh_flippedmerges)();
    ((void (*)())wavelib_setDWPTExtension)();

    return 0;
}
