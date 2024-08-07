extern void *lcms__cmsStageAllocIdentityCLut;
extern void *mp3lame_hip_decode;
extern void *gsl_gsl_stats_uint_Sn_from_sorted_data;
extern void *roaring_roaring_bitmap_add;

int main(int argc, char **argv) {
    ((void (*)())lcms__cmsStageAllocIdentityCLut)();
    ((void (*)())mp3lame_hip_decode)();
    ((void (*)())gsl_gsl_stats_uint_Sn_from_sorted_data)();
    ((void (*)())roaring_roaring_bitmap_add)();

    return 0;
}
