// Copyright (c) 2011-2016 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Ravencoin Core developers
// Copyright (c) 2025 The Bottlecaps Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#define BOOST_TEST_MODULE Caps Test Suite

#include "net.h"

#include <boost/test/unit_test.hpp>

std::unique_ptr<CConnman> g_connman;

[[noreturn]] void Shutdown(void *parg)
{
    std::exit(EXIT_SUCCESS);
}

[[noreturn]] void StartShutdown()
{
    std::exit(EXIT_SUCCESS);
}

bool ShutdownRequested()
{
    return false;
}
