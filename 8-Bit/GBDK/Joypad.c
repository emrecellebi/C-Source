#include <gb/gb.h>
#include <stdio.h>

unsigned char Smiles[];

void main()
{
	set_sprite_data(0, 2, Smiles);
	set_sprite_tile(0, 0);
	move_sprite(0, 80, 80);
	SHOW_SPRITES;
	
	while(1)
	{
		switch(joypad())
		{
			case J_LEFT:
				scroll_sprite(0, -1, 0);
			break;
			case J_RIGHT:
				scroll_sprite(0, 1, 0);
			break;
			case J_UP:
				scroll_sprite(0, 0, -1);
			break;
			case J_DOWN:
				scroll_sprite(0, 0, 1);
			break;
		}
		delay(10);
	}
}

unsigned char Smiles[] =
{
  0x7E,0x7E,0xFF,0x81,0xFF,0xA5,0xFF,0x81,
  0xFF,0x81,0xFF,0xBD,0xFF,0x81,0x7E,0x7E,
  0x7E,0x7E,0xFF,0x81,0xFF,0xA5,0xFF,0x81,
  0xFF,0xA5,0xFF,0x99,0xFF,0x81,0x7E,0x7E
};