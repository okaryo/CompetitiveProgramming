A,B,C,X = gets.split.map(&:to_i)
if X <= A
  puts 1
elsif X <= B
  puts C.to_f / (B - A)
else
  puts 0
end
