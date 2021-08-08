def match?(t, s)
  (s.size - t.size + 1).times do |i|
    ok = true
    t.size.times do |j|
      if s[i + j] != t[j] && t[j] != '.'
        ok = false
        break
      end
    end
    return true if ok
  end
  return false
end

s = gets.chomp
strings = [*('a'..'z'), '.']
match_string = []

strings.each do |ci|
  match_string << ci if match?(ci, s)

  strings.each do |cj|
    t = ci + cj
    match_string << t if match?(t, s)

    strings.each do |ck|
      t = ci + cj + ck
      match_string << t if match?(t, s)
    end
  end
end

puts(match_string.size)
