extern void *parson_json_parse_file;
extern void *shapelib_DBFWriteNULLAttribute;
extern void *libwebsockets__lws_plat_file_open;
extern void *libvmdk_libfdata_list_calculate_mapped_ranges;

int main(int argc, char **argv) {
    ((void (*)())parson_json_parse_file)();
    ((void (*)())shapelib_DBFWriteNULLAttribute)();
    ((void (*)())libwebsockets__lws_plat_file_open)();
    ((void (*)())libvmdk_libfdata_list_calculate_mapped_ranges)();

    return 0;
}
