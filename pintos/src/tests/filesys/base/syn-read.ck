# -*- perl -*-
use strict;
use warnings;
use tests::tests;
check_expected (IGNORE_EXIT_CODES => 1, [<<'EOF']);
(syn-read) begin
(syn-read) num=1
(syn-read) end
EOF
pass;
