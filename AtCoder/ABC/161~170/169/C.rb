require 'bigdecimal'
a, b = gets.split
puts (a.to_i * BigDecimal(b)).floor