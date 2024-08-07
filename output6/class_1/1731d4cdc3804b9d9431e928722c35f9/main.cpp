extern void *zfp_stream_size;
extern void *libvmdk_libuna_utf8_string_compare_with_utf32;
extern void *libmediainfo_sha512_begin;
extern void *parson_json_object_dotget_string;

int main(int argc, char **argv) {
    ((void (*)())zfp_stream_size)();
    ((void (*)())libvmdk_libuna_utf8_string_compare_with_utf32)();
    ((void (*)())libmediainfo_sha512_begin)();
    ((void (*)())parson_json_object_dotget_string)();

    return 0;
}
