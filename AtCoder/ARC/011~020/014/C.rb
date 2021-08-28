_n = gets.to_i
s = gets.chomp

cnt = {R: 0, G: 0, B: 0}
s.chars.each do |char|
  cnt[char.to_sym] += 1
end

puts cnt[:R] % 2 + cnt[:G] % 2 + cnt[:B] % 2