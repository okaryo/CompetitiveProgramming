k = gets.to_i
s = gets.chomp

puts s.length <= k ? s : s[0, k] + '...'