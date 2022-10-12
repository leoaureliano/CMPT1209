//
//  Lab5.hpp
//  LAB5
//
//  Created by Leonardo Aureliano on 2022-10-11.
//

#ifndef Lab5_hpp
#define Lab5_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class PrimeList
{
private:
    
unsigned int num;
long int last;
long int* list;
bool isPrime(long int);

public:

PrimeList();
PrimeList(unsigned int);
PrimeList(const PrimeList&);
PrimeList(PrimeList&&);
PrimeList(long int*, unsigned int);
~PrimeList();
const PrimeList& operator++();
const PrimeList& operator--();
const PrimeList& operator=(const PrimeList&);
const PrimeList& operator=(PrimeList&&);
    
friend ostream& operator<<(ostream&, const PrimeList&);

long int getLast(); //returns last
int getLength(); //returns num
    
};


long int getLast(int num, long int* list){
    int n, last;
    int num[];
    n = getLength();

    for(int i = 0; i < n; i++) {
        
        cin >> num[i];
        i++;
    }
    
    last = num[0];
    for(int i = 1; i < n; i++){
        
        if(last < num[i])
            last = num[i];
    }
    
    return last;
    } //returns last
    
int getLength(int); {
    cin >> getLength();
    
    return getLength;
    }//returns num

PrimeList :: operator ++ (int last, int list) {
    
    last = ++getLast();
    list = ++getlist();
    
    return PrimeList(last, list);
}

const PrimeList& operator--(const PrimeList& a, const PrimeList& b){
    int p1 = --a.getLast;
    int p2 = --b.getLength;
    return PrimeList&(p1, p2);
}

ostream& operator <<(ostream& outputStream, const PrimeList& out)
{
    const string;
    if (p1 == 0){
        phase = "> One-arg constructor called.";
        cout << phase;
    }
    else {
        phase = "> Copy constructor called.";
        cout << phase
    }
    
    if(isPrime = false){
        phase = "> ERROR: input list must consist of prime numbers only."
    }
    return phase;
}

bool isPrime(int n) {
  bool isPrime = true;

  if (n == 0 || n == 1) {
    isPrime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }

  return isPrime;
}

PrimeList makePrimeList(long int* p, using int num){
    int arr[0];
    long int* p;
    for(int i = 0; i < p; i++) {
       arr[i] = ++arr[i];
    
    if (p == 0 || p == 1) {
        p = false;
      }

      for (i = 2; i <= p/2; ++i) {
          if (p % i == 0) {
              p = false;
              break;
          }
    }
    return arr[i];
}

long int PrimeList::getLast(int) {
    cin >> a:
    
    swap(a,b)
    
    return getLast();
}

int PrimeList::getLength() {
    return getLength();
}

#endif /* Lab5_hpp */
