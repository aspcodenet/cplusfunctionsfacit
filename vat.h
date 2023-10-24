#ifndef _VAT_H
#define _VAT_H 1

#define RESTAURANT_VAT 0.12f
#define BOOK_VAT 0.06f
#define DEFAULT_VAT 0.25f

float calculateVat(int price, float percentVat = DEFAULT_VAT);


#endif // _VAT_H 
