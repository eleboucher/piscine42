grep -i "nicolas[[:space:]]Bauer" $1 | rev | cut -f 2 | rev | grep "\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}"
