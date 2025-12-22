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
        explicit CaesarCipher (std::size_t key);

        /**
         * \brief New cipher with key 
         * 
         * \param key the key for the cipher, given as a string which needs to be converted into an integer
         */
        explicit CaesarCipher (const std::string& key);
        std::size_t key_{0};

};

#endif 