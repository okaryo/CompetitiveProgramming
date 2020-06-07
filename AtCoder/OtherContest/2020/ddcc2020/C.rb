h, w, k = gets.split.map(&:to_i)
s = h.times.map{gets.chomp}

ans_table = Array.new(h){Array.new(w, 1)}
now = 1
h.times do |i|
  if s[i].include?('#')
    first_ichigo = false
    w.times do |j|
      ans_table[i][j] = now
      if s[i][j] == '#' && first_ichigo
        now += 1
        ans_table[i][j] = now
      elsif s[i][j] == '#'
        first_ichigo = true
      end
    end
    now += 1
  else
    if i > 0
      w.times do |j|
        ans_table[i][j] = ans_table[i - 1][j]
      end
    end
  end
end

h.times do |i|
  if h - i - 1 < h - 1 && !s[h - i - 1].include?('#')
    w.times do |j|
      ans_table[h - i - 1][j] = ans_table[h - i][j]
    end
  end
end

h.times do |i|
  puts ans_table[i].join(' ')
end
