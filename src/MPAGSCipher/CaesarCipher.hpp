#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>
#include "CipherMode.hpp"

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

            /**
         * \brief Encrypts or decrypts a string and returns resulting string 
         * 
         * \param inputText input text to be encrypted, decrypted
         * \param encrypt if true, encrypt; if false, decrypt
         */
        std::string applyCipher (const std::string& inputText, const CipherMode encrypt) const;

    private:
        /**
         * \brief Alphabet
         * 
         * \param alphabet the key for the cipher
         */
        const std::vector<char> alphabet;
        std::vector<char> alphabet_{
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        
        std::size_t key_{0};

};

#endif 