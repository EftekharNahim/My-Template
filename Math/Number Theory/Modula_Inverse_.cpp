//There are many way to calculate modula inverse. 
// For a prime modulus m, a^(m-2)=1/a mod m; you can calculate a^(m-2) by using bigmod.
// another way is below:
int inv(int a) {
  return a <= 1 ? a : m - (long long)(m/a) * inv(m % a) % m;
}

/*Applying this formula, we can also precompute the modular inverse for every number in the range  
$[1, m-1]$  in  O(m) :                                                   */

inv[1] = 1;
for(int a = 2; a < m; ++a)
    inv[a] = m - (long long)(m/a) * inv[m%a] % m;
