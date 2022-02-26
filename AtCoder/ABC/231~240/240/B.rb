require 'set'
N = gets.to_i
A = gets.split.map(&:to_i)
puts Set.new(A).size
