K = gets.to_i
if K >= 60
  puts "22:#{(K-60).to_s.rjust(2, '0')}"
else
  puts "21:#{K.to_s.rjust(2, '0')}"
end
