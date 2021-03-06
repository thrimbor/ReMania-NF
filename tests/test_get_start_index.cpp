//
// Created by protobit on 10/02/2021.
//

#include <assetLayer.h>

int main(int argc, char** argv) {
    std::ifstream file(std::string(argv[1])+"/assets/Packs/packlist.dat");
    bool passed = true;
    uint32_t salt = assetLayer::getSalt(file);
    std::vector<int> start_pos_vec = {0xA+1, 0x2D+1, 0x50+1, 0x73+1, 0x96+1, 0xB9+1, 0xDC+1, 0xFF+1, 0x122+1, 0x145+1};

    for (int i = 0; i < 10; i++) {
        if (assetLayer::getIndexStart(i+1,file) != start_pos_vec[i]) {
            passed = false;
        }
    }

    if (passed) {
        printf("Test passed");
    }
    else {
        printf("Test failed");
    }
}
