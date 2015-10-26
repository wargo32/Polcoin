// Copyright (c) 2011-2014 The Polcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Polcoin_QT_PolcoinADDRESSVALIDATOR_H
#define Polcoin_QT_PolcoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class PolcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PolcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Polcoin address widget validator, checks for a valid Polcoin address.
 */
class PolcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PolcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // Polcoin_QT_PolcoinADDRESSVALIDATOR_H
