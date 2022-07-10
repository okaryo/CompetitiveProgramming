h1,h2,h3,w1,w2,w3 = gets.split.map(&:to_i)

ans = 0
1.upto(h1-2) do |h1_i|
  1.upto(h1-h1_i-1) do |h1_j|
    h1_k = h1 - h1_i - h1_j

    1.upto(h2-2) do |h2_i|
      1.upto(h2-h2_i-1) do |h2_j|
        h2_k = h2 - h2_i - h2_j

        if h1_i + h2_i < w1 && h1_j + h2_j < w2 && h1_k + h2_k < w3
          h3_i = w1 - h1_i - h2_i
          h3_j = w2 - h1_j - h2_j
          h3_k = w3 - h1_k - h2_k
          if h3 == h3_i + h3_j + h3_k
            ans += 1
          end 
        end
      end
    end
  end
end
puts ans
