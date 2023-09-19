//ConvParams part
const struct ConvParams conv2d_0_params = {
    .batch_size=1,
    .in_dim=28, .out_dim=26,
    .kernel_size=3,
    .in_channels=1,
    .out_channels=32,
    .stride=1,
    .padding=0,
    .bias=false,
    .depthwise=false,
    .n_patches=676, // BATCH_SIZE * OUT_DIM * OUT_DIM
    .patch_size=9, // KERNEL_DIM * KERNEL_DIM* IN_CHANNELS
    .output_scale=0.0042902096174657345,
    .res_scale=0,
    .pool_size=0, .pool_stride=0, .pool_padding=0, .out_dim_pooled=0,
    .I=784, .J=32, .K=9 // (, out_channels, patch_size)
};

const struct ConvParams conv2d_1_params = {
    .batch_size=1,
    .in_dim=26, .out_dim=24,
    .kernel_size=3,
    .in_channels=32,
    .out_channels=64,
    .stride=1,
    .padding=0,
    .bias=false,
    .depthwise=false,
    .n_patches=576, // BATCH_SIZE * OUT_DIM * OUT_DIM
    .patch_size=288, // KERNEL_DIM * KERNEL_DIM* IN_CHANNELS
    .output_scale=0.0017954357899725437,
    .res_scale=0,
    .pool_size=2, .pool_stride=2, .pool_padding=0, .out_dim_pooled=0,
    .I=576, .J=64, .K=288 // (, out_channels, patch_size)
};
const struct ConvParams conv2d_2_params = {
    .batch_size=1,
    .in_dim=24, .out_dim=22,
    .kernel_size=3,
    .in_channels=64,
    .out_channels=16,
    .stride=1,
    .padding=0,
    .bias=false,
    .depthwise=false,
    .n_patches=484, // BATCH_SIZE * OUT_DIM * OUT_DIM
    .patch_size=576, // KERNEL_DIM * KERNEL_DIM* IN_CHANNELS
    .output_scale=0.0011688483646139503,
    .res_scale=0,
    .pool_size=2, .pool_stride=2, .pool_padding=0, .out_dim_pooled=0,
    .I=484, .J=16, .K=576 // (, out_channels, patch_size)
};

const struct FcParams fc_1_params = {.I=1, .J=10, .K=1936, .output_scale=0.0007861966732889414};

