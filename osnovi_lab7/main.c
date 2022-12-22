#include <stdio.h>

//enum types {
//    TYPES_ZAO, ooo, ip
//};
//
//struct rectangle {
//    int width;
//    int height;
//};

struct mp3 {
    unsigned char playing: 1;
    unsigned char pause: 1;
    unsigned char recording: 1;
};

void printState(struct mp3 *mp3b) {
    printf("playing: %d\n", mp3b->playing);
    printf("pause: %d\n", mp3b->pause);
    printf("recording: %d\n", mp3b->recording);
}

int main() {
    struct mp3 mp3b;
    mp3b.playing = 0;
    mp3b.pause = 1;
    mp3b.recording = 0;
    printState(&mp3b);

    return 0;
}

//    enum types type;
//    type = ip;
//    printf("type: %d\n\n", type);
//
//    struct rectangle rect;
//    rect.width = 10;
//    rect.height = 20;
//    printf("width: %d, height: %d \n", rect.width, rect.height);
//    printf("squared area: %d\n\n", rect.width * rect.height);





