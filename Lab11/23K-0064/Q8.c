/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is
characterized by its length, width and height.
The height of the tunnel is 41 feet, and the width can be assumed to be infinite. A box can be carried
through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box
that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.
*/
#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

int calculateVolume(struct Box box) {
    return box.length * box.width * box.height;
}

int canPassThroughTunnel(struct Box box, int tunnelHeight) {
    return box.height < tunnelHeight;
}

int main() {
    int numBoxes;
    printf("Enter the number of boxes: ");
    scanf("%d", &numBoxes);

    struct Box boxes[numBoxes];

    for (int i = 0; i < numBoxes; ++i) {
        printf("Enter dimensions for box %d (length width height): ", i + 1);
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }

    int tunnelHeight = 41;

    printf("Volumes of boxes that can pass through the tunnel:\n");
    for (int i = 0; i < numBoxes; ++i) {
        if (canPassThroughTunnel(boxes[i], tunnelHeight)) {
            int volume = calculateVolume(boxes[i]);
            printf("%d\n", volume);
        }
    }

    return 0;
}


