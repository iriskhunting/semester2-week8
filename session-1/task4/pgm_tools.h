
/* TODO: Define a PGMImage structure that encapsulates:
   - width and height
   - max_gray value
   - 2D array of pixel values (pixels)
*/

typedef struct {
    float width;
    float height;
    int max_gray;
    unsigned char **pixels;
} PGMImage;


/* TODO: Update these function prototypes to use your PGMImage structure */
/* Function prototypes */
unsigned char **allocate_image_array(int height, int width);
void free_image_array(unsigned char **image, int height);
unsigned char **read_pgm_image(const char *filename, int *height, int *width, int *max_gray);
void print_image_info(const char *filename, int height, int width, int max_gray);
void print_image_values(unsigned char **pixels, int height, int width);
unsigned char **invert_image_colors(unsigned char **original_image, int height, int width, int max_gray);
unsigned char **rotate_image(unsigned char **original_image, int height, int width, int degrees);
int save_pgm_image(const char *filename, PGMImage *image);
int get_user_menu_choice(const char *message);
void display_menu(void);