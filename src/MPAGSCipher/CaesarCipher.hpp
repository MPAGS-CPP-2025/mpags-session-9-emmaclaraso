#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>

/**
 * \file CaesarCipher.hpp
 * \brief Declaration of CaesarCipher class
 */

 /**
  * \class CaesarCipher
  * \brief Encrypt or decrypt text with the Caesar cipher
  */

class CaesarCipher{
    public:
    /**
     * \brief New cipher with key 
     * 
     * \param key the key for the cipher
     */
    CaesarCipher (std::size_t key);
    std::size_t key_{0};

};

#endif 