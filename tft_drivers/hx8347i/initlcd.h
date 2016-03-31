case HX8347I:
	LCD_Write_COM_DATA(0x18,0x88);        //UADJ 75Hz  
	LCD_Write_COM_DATA(0x19,0x01);        //OSC_EN='1', start Osc 
	//Power Voltage Setting  
	LCD_Write_COM_DATA(0x1B,0x1E); //VRH=4.60V  
	LCD_Write_COM_DATA(0x1C,0x07); //AP Crosstalk    04 
	LCD_Write_COM_DATA(0x1A,0x01); //BT (VGH~15V,VGL~-10V,DDVDH~5V) 
	LCD_Write_COM_DATA(0x24,0x38); //VMH 27
	LCD_Write_COM_DATA(0x25,0x5F); //VML 
	//VCOM offset  
	LCD_Write_COM_DATA(0x23,0x8C); //for Flicker adjust  
	LCD_Write_COM_DATA(0x1F,0x88);// GAS=1, VOMG=00, PON=0, DK=1, XDK=0, DVDH_TRI=0, STB=0 
	delay(5);  
	LCD_Write_COM_DATA(0x1F,0x80);// GAS=1, VOMG=00, PON=0, DK=0, XDK=0, DVDH_TRI=0, STB=0 
	delay(5);  
	LCD_Write_COM_DATA(0x1F,0x90);// GAS=1, VOMG=00, PON=1, DK=0, XDK=0, DVDH_TRI=0, STB=0 
	delay(5);  
	LCD_Write_COM_DATA(0x1F,0xD0);// GAS=1, VOMG=10, PON=1, DK=0, XDK=0, DDVDH_TRI=0, STB=0 
	delay(5);  
	//Display ON Setting  
	LCD_Write_COM_DATA(0x28,0x38);   //GON=1, DTE=1, D=1000 
	delay(40);  
	LCD_Write_COM_DATA(0x28,0x3C);   //GON=1, DTE=1, D=1100         
	LCD_Write_COM_DATA(0x36,0x09);   //REV, BGR 
	LCD_Write_COM_DATA(0x17,0x05);  //16BIT/PIXEL

	//Gamma 2.2 Setting 
	LCD_Write_COM_DATA(0x40,0x00); // 
	LCD_Write_COM_DATA(0x41,0x00); // 
	LCD_Write_COM_DATA(0x42,0x00); //  
	LCD_Write_COM_DATA(0x43,0x11); // 
	LCD_Write_COM_DATA(0x44,0x0e); // 
	LCD_Write_COM_DATA(0x45,0x23); // 
	LCD_Write_COM_DATA(0x46,0x08); //  
	LCD_Write_COM_DATA(0x47,0x53); // 
	LCD_Write_COM_DATA(0x48,0x03); // 
	LCD_Write_COM_DATA(0x49,0x11); //  
	LCD_Write_COM_DATA(0x4A,0x18); // 
	LCD_Write_COM_DATA(0x4B,0x1a); // 
	LCD_Write_COM_DATA(0x4C,0x16); // 
	LCD_Write_COM_DATA(0x50,0x1c); // 
	LCD_Write_COM_DATA(0x51,0x31); // 
	LCD_Write_COM_DATA(0x52,0x2e); // 
	LCD_Write_COM_DATA(0x53,0x3f); // 
	LCD_Write_COM_DATA(0x54,0x3f); // 
	LCD_Write_COM_DATA(0x55,0x3f); //  
	LCD_Write_COM_DATA(0x56,0x2c); // 
	LCD_Write_COM_DATA(0x57,0x77); //  
	LCD_Write_COM_DATA(0x58,0x09); // 
	LCD_Write_COM_DATA(0x59,0x05); // 
	LCD_Write_COM_DATA(0x5A,0x07); // 
	LCD_Write_COM_DATA(0x5B,0x0e); // 
	LCD_Write_COM_DATA(0x5C,0x1c); // 
	LCD_Write_COM_DATA(0x5D,0x88); //   

	break;
