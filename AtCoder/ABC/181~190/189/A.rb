require 'set'
puts Set.new(gets.chomp.chars).length == 1 ? 'Won' : 'Lost'
