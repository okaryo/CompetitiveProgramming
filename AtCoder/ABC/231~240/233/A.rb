X,Y = gets.split.map(&:to_i)
diff = Y - X
if diff <= 0
  puts 0
else
  puts (diff + 9) / 10
end
