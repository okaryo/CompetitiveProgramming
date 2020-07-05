h,w,k = gets.split.map(&:to_i)
c = h.times.map{gets.chomp}

sum_black = 0
sum_h = Array.new(h, 0)
sum_w = Array.new(w, 0)
(h).times do |i|
  (w).times do |j|
    if c[i][j] == '#'
      sum_black += 1
      sum_h[i] += 1
      sum_w[j] += 1
    end
  end
end

ans = 0
[0, 1].repeated_permutation(h) do |h_bits|
  [0, 1].repeated_permutation(w) do |w_bits|
    t = 0
    h.times do |i|
      if h_bits[i] == 1
        t += sum_h[i]
      end
    end
    w.times do |i|
      if w_bits[i] == 1
        t += sum_w[i]
      end
    end
    h.times do |i|
      w.times do |j|
        if h_bits[i] == 1 && w_bits[j] == 1 && c[i][j] == '#'
          t -= 1
        end
      end
    end
    if sum_black - t == k
      ans += 1
    end
  end
end

puts ans
