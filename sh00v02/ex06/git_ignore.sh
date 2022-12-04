#!/bin/bash
git -C $(git rev-parse --show-toplevel) ls-files --exclude-standard --ignored --others

